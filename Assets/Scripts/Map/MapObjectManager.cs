using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Unity.Location;
using Mapbox.Utils;
using JfranMora.Inspector;

namespace Tapestry
{
    public enum MapObjectType
    {
        Invalid = -1,
        
        Coin = 0,
        Character,
        AssetContainer,
        PartnerLocation,
        Station,
        Friend,
        MediaDome,
        EasterEgg
    }

    // TODO:JCL will come from server in real game
    [System.Serializable]
    public struct MapObjectDataEntry
    {
        public Vector2d location;
        public MapObjectType type;
        public string id;
        public bool active;
        public string imagePath;
        public string titleEN;
        public string titleJP;
    }

    public class MapObjectManager : MonoBehaviour
    {

        [SerializeField]
        PlayerParameters playerParameters;

        [SerializeField]
        List<GameObject> objectPrefabs;

        // TODO:JCL will come from server in real game
        List<MapObjectDataEntry> mapObjectList;

        Vector2d lastCheckedLocation;
        List<GameObject> activeObjects = new List<GameObject>();
        Mapbox.Unity.Map.AbstractMap map;
        Dictionary<GameObject, Vector2d> mapObjectLocationMap = new Dictionary<GameObject, Vector2d>();
        Dictionary<GameObject, Vector2d> staticMapObjectsLocationMap = new Dictionary<GameObject, Vector2d>();


        bool _isInitialized = false;

        private void Start()
        {
            LocationProviderFactory.Instance.mapManager.OnInitialized += () => _isInitialized = true;
            map = GameObject.FindObjectOfType< Mapbox.Unity.Map.AbstractMap>();
            map.OnUpdated += UpdateMapObjects;
            TapestryEventRegistry.OnTutorialStarted.SubscribeMethod(SpawnTrainStations, false);
            TapestryEventRegistry.OnTutorialEnded.SubscribeMethod(OnTutorialEndedListener, false);
            TapestryEventRegistry.OnEnterAR.SubscribeMethod(OnEnterAR, false);
            TapestryEventRegistry.OnLeaveAR.SubscribeMethod(OnLeaveAR, false);
        }

        void OnEnterAR()
        {
            float ARScale = 0.5f;
            for (int i = 0; i < activeObjects.Count; i++)
            {
                if (activeObjects[i] != null)
                {
                    activeObjects[i].transform.localScale = Vector3.one * ARScale;
                }
            }
        }

        void OnLeaveAR()
        {
            float MapScale = 1.0f;
            for (int i = 0; i < activeObjects.Count; i++)
            {
                if (activeObjects[i] != null)
                {
                    activeObjects[i].transform.localScale = Vector3.one * MapScale;
                }
            }
        }


        void UpdateMapObjects()
        {
            for (int i = 0; i < activeObjects.Count; i++)
            {
                if (activeObjects[i] == null)
                {
                    activeObjects.RemoveAt(i);
                }
                else
                {
                    GameObject mapObject = activeObjects[i];
                    if (mapObjectLocationMap.ContainsKey(mapObject))
                    {
                        Vector2d location = mapObjectLocationMap[mapObject];
                        mapObject.transform.position = map.GeoToWorldPosition(location);
                    }
                }
            }
            
            foreach (KeyValuePair<GameObject, Vector2d> entry in staticMapObjectsLocationMap) {
                Vector2d location = staticMapObjectsLocationMap[entry.Key];
                entry.Key.transform.position = map.GeoToWorldPosition(location);
            }
        }

        // TODO: Fake call to server to fetch new locations
        IEnumerator ServerGetNearbyLocations(Vector2d location, System.Action<List<MapObjectDataEntry>> callback)
        {
            mapObjectList = new List<MapObjectDataEntry>()
            {
                new MapObjectDataEntry(){ location = new Vector2d(35.67334077434379, 139.72432689064138 ),  type = MapObjectType.Character, id = "Influencer 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.66383125978682, 139.71233080885753 ),  type = MapObjectType.AssetContainer, id = "Container 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6740688702254, 139.723871050036),  type = MapObjectType.AssetContainer, id = "Container 2", active = true},
                 
                // Coins
                new MapObjectDataEntry(){ location = new Vector2d(35.6736143777845, 139.723968279045),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6727784573309, 139.724845400094),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6724524258513, 139.723868175027),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6597043056317, 139.700134949259),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6597115582655, 139.700460281906),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6595940654677, 139.700791382382),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6885792495104, 139.700219611726),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6888714802732, 139.699094886321),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6884041335359, 139.698919105144),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6629189529367, 139.730825253095),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6622238404868, 139.731090298288),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6631789212122, 139.732703915348),  type = MapObjectType.Coin, id = "Coin", active = true},
                
                // SMG Office
                new MapObjectDataEntry(){ location = new Vector2d(35.6715802857341, 139.721430025355),  type = MapObjectType.PartnerLocation, id = "Seven-Eleven", active = true, imagePath = "Textures/Brands/seven_eleven_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.671422774710734, 139.72301152935734 ),  type = MapObjectType.PartnerLocation, id = "Aoyama Nakayama", active = true, imagePath = "Textures/Brands/nakayama_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.67163316984247, 139.7221145489428 ),  type = MapObjectType.PartnerLocation, id = "NARISAWA", active = true, imagePath = "Textures/Brands/narisawa_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6713512477484, 139.723866930164),  type = MapObjectType.PartnerLocation, id = "Spicy Bistro Taprobane", active = true, imagePath = "Textures/Brands/taprobane_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.677069855773496, 139.73658949609228 ),  type = MapObjectType.PartnerLocation, id = "Bic Camera", active = true, imagePath = "Textures/Brands/biccamera_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6723701438843, 139.721932649589),  type = MapObjectType.PartnerLocation, id = "Family Mart", active = true, imagePath = "Textures/Brands/familymart_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.66934551459039, 139.7059251114768 ),  type = MapObjectType.PartnerLocation, id = "ABC Mart", active = true, imagePath = "Textures/Brands/abcmat_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.67061188817898, 139.7030133423839 ),  type = MapObjectType.PartnerLocation, id = "UNIQLO", active = true, imagePath = "Textures/Brands/uniqlo_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6729781508441, 139.723639650502),  type = MapObjectType.PartnerLocation, id = "Starbucks", active = true, imagePath = "Textures/Brands/starbucks_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.67128213185279, 139.7158935109607 ),  type = MapObjectType.PartnerLocation, id = "Natural LAWSON", active = true, imagePath = "Textures/Brands/natural_lawson_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.66847195736579, 139.71521040194185 ),  type = MapObjectType.PartnerLocation, id = "McDonald's", active = true, imagePath = "Textures/Brands/mcdonalds_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.664314274372536, 139.71117466813948 ),  type = MapObjectType.PartnerLocation, id = "KFC", active = true, imagePath = "Textures/Brands/kfc_256.png"},
                // Shibuya
                new MapObjectDataEntry(){ location = new Vector2d(35.6582742959458, 139.699651825476),  type = MapObjectType.PartnerLocation, id = "Seven-Eleven", active = true, imagePath = "Textures/Brands/seven_eleven_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6597716993392, 139.701963074355),  type = MapObjectType.PartnerLocation, id = "Bic Camera", active = true, imagePath = "Textures/Brands/biccamera_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.656920806431, 139.700889160713),  type = MapObjectType.PartnerLocation, id = "Family Mart", active = true, imagePath = "Textures/Brands/familymart_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6602592978627, 139.698642456485),  type = MapObjectType.PartnerLocation, id = "ABC Mart", active = true, imagePath = "Textures/Brands/abcmat_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6593967932192, 139.698227722703),  type = MapObjectType.PartnerLocation, id = "UNIQLO", active = true, imagePath = "Textures/Brands/uniqlo_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.65955227497737, 139.69915017269108 ),  type = MapObjectType.PartnerLocation, id = "Shibuya 109", active = true, imagePath = "Textures/Brands/shibuya_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.65896832688, 139.700581543509),  type = MapObjectType.Character, id = "Influencer 2", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6579004984647, 139.70027117974),  type = MapObjectType.AssetContainer, id = "Container 3", active = true},
                // Shinjuku
                new MapObjectDataEntry(){ location = new Vector2d(35.6899857398271, 139.703093910013),  type = MapObjectType.PartnerLocation, id = "Seven-Eleven", active = true, imagePath = "Textures/Brands/seven_eleven_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.68945535077531, 139.69758716082953 ),  type = MapObjectType.PartnerLocation, id = "Bic Camera", active = true, imagePath = "Textures/Brands/biccamera_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.689204289032475, 139.6981580381888 ),  type = MapObjectType.PartnerLocation, id = "McDonald's", active = true, imagePath = "Textures/Brands/mcdonalds_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.692188304451086, 139.70222773768236 ),  type = MapObjectType.PartnerLocation, id = "ABC Mart", active = true, imagePath = "Textures/Brands/abcmat_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.69121045801959, 139.7023491686679 ),  type = MapObjectType.PartnerLocation, id = "Zara", active = true, imagePath = "Textures/Brands/zara_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.69372198328926, 139.70161062120454 ),  type = MapObjectType.PartnerLocation, id = "Don Quijote", active = true, imagePath = "Textures/Brands/donquijote_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6895094765908, 139.701283912317),  type = MapObjectType.Character, id = "Influencer 3", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.688812364982, 139.701238593698),  type = MapObjectType.AssetContainer, id = "Container 4", active = true},
                // Roppongi
                new MapObjectDataEntry(){ location = new Vector2d(35.6627575044026, 139.732322277745),  type = MapObjectType.PartnerLocation, id = "Seven-Eleven", active = true, imagePath = "Textures/Brands/seven_eleven_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.660060272912006, 139.73009352733425 ),  type = MapObjectType.PartnerLocation, id = "Roppongi Hills", active = true, imagePath = "Textures/Brands/roppongi_hills_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6633217360288, 139.733055477702),  type = MapObjectType.PartnerLocation, id = "Family Mart", active = true, imagePath = "Textures/Brands/familymart_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6627638641684, 139.732897549335),  type = MapObjectType.PartnerLocation, id = "Tully's Coffee", active = true, imagePath = "Textures/Brands/tullys_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.66496696728618, 139.7306568213099 ),  type = MapObjectType.PartnerLocation, id = "Starbucks", active = true, imagePath = "Textures/Brands/starbucks_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6623554994842, 139.734670468086),  type = MapObjectType.PartnerLocation, id = "Don Quijote", active = true, imagePath = "Textures/Brands/donquijote_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6633719443103, 139.731837368633),  type = MapObjectType.Character, id = "Influencer 4", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.66313015904226, 139.73129040536875    ),  type = MapObjectType.AssetContainer, id = "Container 5", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6622907857943, 139.732311154007),  type = MapObjectType.PartnerLocation, id = "APA Hotel", active = true, imagePath = "Textures/Brands/apahotel_256.png"},

                // Media Domes
                new MapObjectDataEntry(){ location = new Vector2d(35.6742242717639, 139.724565248706),  type = MapObjectType.MediaDome, id = "SKE48", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6592004131139, 139.701770813556),  type = MapObjectType.MediaDome, id = "Media Dome 2", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6889495570151, 139.704012641628),  type = MapObjectType.MediaDome, id = "BTS", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6643203168947, 139.732963467276),  type = MapObjectType.MediaDome, id = "UnderArmour", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6748768879336, 139.726971254729),  type = MapObjectType.MediaDome, id = "Media Dome 5", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6583825293445, 139.699039337595),  type = MapObjectType.MediaDome, id = "Media Dome 6", active = true},
                
                // Easter Eggs
                new MapObjectDataEntry(){ location = new Vector2d(35.6735326045248, 139.723292207882),  type = MapObjectType.EasterEgg, id = "EasterEgg 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6582530954723, 139.70086032158) ,  type = MapObjectType.EasterEgg, id = "EasterEgg 2", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6900928149484, 139.703963203035),  type = MapObjectType.EasterEgg, id = "EasterEgg 3", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6640134917456, 139.731807156243),  type = MapObjectType.EasterEgg, id = "EasterEgg 2", active = true},

                // Test positions
                new MapObjectDataEntry(){ location = new Vector2d(35.56810654373915, -120.71151949776 ),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.56780835078346, -120.7115044736272 ),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.568459120010765, -120.71183462464474 ),  type = MapObjectType.PartnerLocation, id = "Aoyama Nakayama", active = true, imagePath = "Textures/Brands/nakayama_256.png"},

                new MapObjectDataEntry(){ location = new Vector2d(32.7788255049629, -117.18159957572847 ),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(32.77853316018403, -117.18145750082654 ),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(32.7787256988327, -117.18116680610936 ),  type = MapObjectType.PartnerLocation, id = "Aoyama Nakayama", active = true, imagePath = "Textures/Brands/nakayama_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(32.778977964070656, -117.18135842074729 ),  type = MapObjectType.PartnerLocation, id = "Shibuya 109", active = true, imagePath = "Textures/Brands/shibuya_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(32.778797213465936, -117.18140983007301),  type = MapObjectType.Character, id = "Influencer 2", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(32.7785339763329, -117.18135279228551),  type = MapObjectType.AssetContainer, id = "Container 3", active = true},
               new MapObjectDataEntry(){ location = new Vector2d(32.780095278149524, -117.1817302972716),  type = MapObjectType.MediaDome, id = "Media Dome 6", active = true},

            };
            
            // TODO: Fake the callback from the server
            callback(mapObjectList);
            yield return "success";
        }

        void OnGetNearbyLocations(List<MapObjectDataEntry> objectList)
        {
            SpawnMapObjects(true, objectList.ToArray());
            SpawnFriends();
            SpawnRyansTestMapObjects();
        }

        private MapObject[] SpawnMapObjects (bool clearObjects, params MapObjectDataEntry[] objectList) {

            if (clearObjects) {
                mapObjectLocationMap.Clear();
                foreach (GameObject mapObject in activeObjects) {
                    Destroy(mapObject);
                }
            }

            List<MapObject> createdObjects = new List<MapObject>();

            foreach (MapObjectDataEntry mapObjectEntry in objectList) {
                Vector3 spawnPos = map.GeoToWorldPosition(mapObjectEntry.location);
                GameObject createdPrefab = Instantiate(objectPrefabs[(int)mapObjectEntry.type], spawnPos, Quaternion.identity, transform);
                Debug.Log("Spawn mapobject at " + spawnPos);
                MapObject mapObject = createdPrefab.GetComponent<MapObject>();
                if (mapObject) {
                    mapObject.Initialize(mapObjectEntry);
                }
                if (!mapObjectEntry.active) {
                    createdPrefab.SetActive(false);
                }
                activeObjects.Add(createdPrefab);
                createdObjects.Add(mapObject);
                mapObjectLocationMap.Add(createdPrefab, mapObjectEntry.location);
                TapestryEventRegistry.OnMapObjectSpawned.Invoke(mapObject);
            }

            StartCoroutine(ClearInactiveObjects());

            return createdObjects.ToArray();
        }

        private IEnumerator ClearInactiveObjects()
        {
            yield return new WaitForSeconds(0.5f);
            activeObjects.RemoveAll(item => !item);
            map.UpdateMap();
        }

        // Allow disabling and enabling map objects
        public void SetObjectActive(string objectId, bool active)
        {
            foreach (GameObject mapGameObject in activeObjects)
            {
                MapObject mapObject = mapGameObject.GetComponent<MapObject>();
                if (mapObject && mapObject.DataEntry.id == objectId)
                {
                    mapGameObject.SetActive(active);
                }
            }
        }

        private void SpawnTrainStations () {
            List<MapObjectDataEntry> trainStations = new List<MapObjectDataEntry>()
            {
                // Stations
                new MapObjectDataEntry() { location = new Vector2d(35.66525740151696, 139.7121144392807), type = MapObjectType.Station, id = "Omote-Sando", active = true, titleEN = "Omote-Sando", titleJP = "表参道駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.659508372606595, 139.7005238652844), type = MapObjectType.Station, id = "Shibuya", active = true, titleEN = "Shibuya", titleJP = "渋谷駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.66282634601038, 139.73116857587777), type = MapObjectType.Station, id = "Roppongi", active = true, titleEN = "Roppongi", titleJP = "六本木駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.66716552977179, 139.72653135011922), type = MapObjectType.Station, id = "Nogizaka", active = true, titleEN = "Nogizaka", titleJP = "乃木坂駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.67081553898004, 139.7180508204766), type = MapObjectType.Station, id = "Gaiemmae", active = true, titleEN = "Gaiemmae", titleJP = "外苑前駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.669364350457386, 139.70422936189652), type = MapObjectType.Station, id = "Meiji-jingumae", active = true, titleEN = "Meiji-jingumae", titleJP = "明治神宮前" },
                new MapObjectDataEntry() { location = new Vector2d(35.67280634751722, 139.7239623738931), type = MapObjectType.Station, id = "Aoyama-Itchome", active = true, titleEN = "Aoyama-Itchome", titleJP = "青山一丁目駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.68016784765845, 139.72031448901853), type = MapObjectType.Station, id = "Shinanomachi", active = true, titleEN = "Shinanomachi", titleJP = "信濃町駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.68135306217094, 139.71123789411115), type = MapObjectType.Station, id = "Sendagaya", active = true, titleEN = "Sendagaya", titleJP = "千駄ケ谷駅" },
                new MapObjectDataEntry() { location = new Vector2d(35.689084518081714, 139.70041599234506), type = MapObjectType.Station, id = "Shinjuku", active = true, titleEN = "Shinjuku", titleJP = "新宿駅" },
            };
            foreach (MapObjectDataEntry mapObjectEntry in trainStations) {
                Vector3 spawnPos = map.GeoToWorldPosition(mapObjectEntry.location);
                GameObject createdPrefab = Instantiate(objectPrefabs[(int)mapObjectEntry.type], spawnPos, Quaternion.identity, transform);
                MapObject mapObject = createdPrefab.GetComponent<MapObject>();
                if (mapObject) {
                    mapObject.Initialize(mapObjectEntry);
                }
                staticMapObjectsLocationMap.Add(createdPrefab, mapObjectEntry.location);
            }
        }

        #region Tutorial Spawns
        public void SpawnTutorialCoins(int num, float radius) {
            List<MapObjectDataEntry> coinsList = new List<MapObjectDataEntry>() {
                new MapObjectDataEntry(){ location = new Vector2d(35.6736143777845, 139.723968279045),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6727784573309, 139.724845400094),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6724524258513, 139.723868175027),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6597043056317, 139.700134949259),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6597115582655, 139.700460281906),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6595940654677, 139.700791382382),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6885792495104, 139.700219611726),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6888714802732, 139.699094886321),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6884041335359, 139.698919105144),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6629189529367, 139.730825253095),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6622238404868, 139.731090298288),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6631789212122, 139.732703915348),  type = MapObjectType.Coin, id = "Coin", active = true},
            };

            // 5 Coins around the player
            /*for (int i = 0; i < num; i++) {
                var radians = 2 * Mathf.PI / num * i;
                var vertical = Mathf.Sin(radians);
                var horizontal = Mathf.Cos(radians); 
                var spawnDir = new Vector3 (horizontal, 0, vertical);
                var spawnPos = Vector3.zero + spawnDir * radius;

                MapObjectDataEntry coin = new MapObjectDataEntry() {
                    location = map.WorldToGeoPosition(spawnPos),
                    type = MapObjectType.Coin,
                    id = "Coin",
                    active = true
                };
                coinsList.Add(coin);
            }*/

            TapestryEventRegistry.OnTutorialObjectSpawned.Invoke(SpawnMapObjects(true, coinsList.ToArray()));
        }

        public void SpawnTutorialVirtualCharacters() {

            List<MapObjectDataEntry> virtualCharacters = new List<MapObjectDataEntry>() {
                new MapObjectDataEntry() { location = new Vector2d(35.67334077434379, 139.72432689064138), type = MapObjectType.Character, id = "Influencer 1", active = true },
                new MapObjectDataEntry() { location = new Vector2d(35.65896832688, 139.700581543509), type = MapObjectType.Character, id = "Influencer 2", active = true },
                new MapObjectDataEntry() { location = new Vector2d(35.6895094765908, 139.701283912317), type = MapObjectType.Character, id = "Influencer 3", active = true },
                new MapObjectDataEntry() { location = new Vector2d(35.6633719443103, 139.731837368633), type = MapObjectType.Character, id = "Influencer 4", active = true },
            };
            SpawnMapObjects(false, virtualCharacters.ToArray());
            MapObject closestVirtualCharacter = GetClosestMapObject(MapObjectType.Character);
            TapestryEventRegistry.OnTutorialObjectSpawned.Invoke(new MapObject[] { closestVirtualCharacter });
        }
        
        public void SpawnTutorialPartnerLocation() {

            List<MapObjectDataEntry> partnerLocations = new List<MapObjectDataEntry>() {
                new MapObjectDataEntry(){ location = new Vector2d(35.6729781508441, 139.723639650502),  type = MapObjectType.PartnerLocation, id = "Starbucks", active = true, imagePath = "Textures/Brands/starbucks_256.png" },
                new MapObjectDataEntry(){ location = new Vector2d(35.65955227497737, 139.69915017269108),  type = MapObjectType.PartnerLocation, id = "Shibuya 109", active = true, imagePath = "Textures/Brands/shibuya_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.689204289032475, 139.6981580381888),  type = MapObjectType.PartnerLocation, id = "McDonald's", active = true, imagePath = "Textures/Brands/mcdonalds_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(35.6622907857943, 139.732311154007), type = MapObjectType.PartnerLocation, id = "APA Hotel", active = true, imagePath = "Textures/Brands/apahotel_256.png"},
            };
            SpawnMapObjects(true, partnerLocations.ToArray());
            MapObject closestPartnerLocation = GetClosestMapObject(MapObjectType.PartnerLocation);
            TapestryEventRegistry.OnTutorialObjectSpawned.Invoke(new MapObject[] { closestPartnerLocation });
        }

        public void SpawnTutorialAssetContainer() {

            List<MapObjectDataEntry> assetContainers = new List<MapObjectDataEntry>() { 
                new MapObjectDataEntry(){ location = new Vector2d(35.66383125978682, 139.71233080885753 ),  type = MapObjectType.AssetContainer, id = "Container 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6740688702254, 139.723871050036),  type = MapObjectType.AssetContainer, id = "Container 2", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6579004984647, 139.70027117974),  type = MapObjectType.AssetContainer, id = "Container 3", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.688812364982, 139.701238593698),  type = MapObjectType.AssetContainer, id = "Container 4", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.66313015904226, 139.73129040536875),  type = MapObjectType.AssetContainer, id = "Container 5", active = true},
            };
            SpawnMapObjects(true, assetContainers.ToArray());
            MapObject closestAssetContainer = GetClosestMapObject(MapObjectType.AssetContainer);
            TapestryEventRegistry.OnTutorialObjectSpawned.Invoke(new MapObject[] { closestAssetContainer });
        }

        private void OnTutorialEndedListener () {
            // Only update if moved more than 10 meters
            //_isInitialized && LatLng.GetDistance(lastCheckedLocation, playerParameters.gpsLatLng) > 10.0)
            StartCoroutine(ServerGetNearbyLocations(playerParameters.gpsLatLng, OnGetNearbyLocations));
            lastCheckedLocation = playerParameters.gpsLatLng;
        }

        #endregion
        
        private void SpawnFriends() {
            List<MapObjectDataEntry> friends = new List<MapObjectDataEntry>() { 
                new MapObjectDataEntry(){ location = new Vector2d(35.6736330616611, 139.725205335013), type = MapObjectType.Friend, id = "Friend 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6601016870171, 139.699764493753), type = MapObjectType.Friend, id = "Friend 2", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6885773350817, 139.698788238909), type = MapObjectType.Friend, id = "Friend 3", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6636753043088, 139.733333363152), type = MapObjectType.Friend, id = "Friend 4", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6639506564533, 139.711571806326), type = MapObjectType.Friend, id = "Friend 5", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(35.6582162615616, 139.701901835504), type = MapObjectType.Friend, id = "Friend 6", active = true},
            };
            SpawnMapObjects(false, friends.ToArray());
        }

        private MapObject GetClosestMapObject (MapObjectType filterType) {
            MapObject bestTarget = null;
            float closestDistanceSqr = Mathf.Infinity;
            Vector3 currentPosition = playerParameters.avatarPos;

            foreach (GameObject potentialTarget in activeObjects) {
                MapObject potentialMapObject = potentialTarget.GetComponent<MapObject>();
                if (potentialMapObject.DataEntry.type != filterType) {
                    continue;
                }
                Vector3 directionToTarget = potentialTarget.transform.position - currentPosition;
                float dSqrToTarget = directionToTarget.sqrMagnitude;

                if (dSqrToTarget < closestDistanceSqr) {
                    closestDistanceSqr = dSqrToTarget;
                    bestTarget = potentialMapObject;
                }
            }

            return bestTarget;
        }

        #region Debug & Tests

        private void SpawnRyansTestMapObjects()
        {
            List<MapObjectDataEntry> oneOfEach = new List<MapObjectDataEntry>() { 
                new MapObjectDataEntry(){ location = new Vector2d(33.9018846686719, -118.352544313354), type = MapObjectType.Friend, id = "Friend 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(33.9021055661349, -118.353065477352),  type = MapObjectType.Character, id = "Influencer 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(33.9026070856095, -118.352572465822),  type = MapObjectType.Coin, id = "Coin", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(33.9021773747657, -118.352120653047),  type = MapObjectType.PartnerLocation, id = "Seven-Eleven", active = true, imagePath = "Textures/Brands/seven_eleven_256.png"},
                new MapObjectDataEntry(){ location = new Vector2d(33.9016598952185, -118.352138505823),  type = MapObjectType.AssetContainer, id = "Container 1", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(33.9012643745955, -118.352582078859),  type = MapObjectType.MediaDome, id = "Media Dome 6", active = true},
                new MapObjectDataEntry(){ location = new Vector2d(33.9016530562637, -118.353106676066),  type = MapObjectType.EasterEgg, id = "Easter Egg 1", active = true},
            };
            SpawnMapObjects(false, oneOfEach.ToArray());
        }
        
        #endregion
    }
}