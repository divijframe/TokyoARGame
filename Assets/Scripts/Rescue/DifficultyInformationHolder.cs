using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DifficultyInformationHolder : MonoBehaviour {

    [SerializeField]
    GameObject TraceShape01;
    [SerializeField]
    GameObject TraceShape01b;
    [SerializeField]
    GameObject TraceShape02;
    [SerializeField]
    GameObject TraceShape02b;
    [SerializeField]
    GameObject TraceShape03;
    [SerializeField]
    GameObject TraceShape03b;
    [SerializeField]
    GameObject TraceShape04;
    [SerializeField]
    GameObject TraceShape04b;
    [SerializeField]
    GameObject TraceShape05;
    [SerializeField]
    GameObject TraceShape05b;

    //We don't have to actually know the numeric difficulty here. That's determined by the server

    public struct DifficultyInformation
    {
        public DifficultyInformation(int inLevel, float inStartTime, float inTimePenalty, float inLineWidth)
        {
            level = inLevel;
            StartTime = inStartTime;
            TimePenalty = inTimePenalty;
            lineWidth = inLineWidth;
        }
        public int level;
        public float StartTime;
        public float TimePenalty;
        public float lineWidth;
    }


    public struct SymbolInformation
    {
        public SymbolInformation(int inID, GameObject inPattern, int inDifficulty)
        {
            Pattern = inPattern;
            ID = inID;
            Difficulty = inDifficulty;
        }
        public GameObject Pattern;
        public int Difficulty;
        public int ID;
    }
    public List<GameObject> TraceShapesList;
    public Dictionary<int, SymbolInformation> SymbolsByID;
    public Dictionary<int, DifficultyInformation> DifficultiesByID;

    public static DifficultyInformationHolder instance = null;

    // Use this for initialization
    void Start () {
        Debug.Assert(instance == null);
        instance = this;
        SymbolsByID = new Dictionary<int, SymbolInformation>();

        //TODO: Final vision, make this read game data from the server and update dynamically
        //For now difficulties are hard coded
        SymbolsByID[0] = new SymbolInformation(0, TraceShape01,  1);
        SymbolsByID[1] = new SymbolInformation(1, TraceShape01b, 2);
        SymbolsByID[2] = new SymbolInformation(2, TraceShape02, 3);
        SymbolsByID[3] = new SymbolInformation(3, TraceShape02b, 1);
        SymbolsByID[4] = new SymbolInformation(4, TraceShape03, 2);
        SymbolsByID[5] = new SymbolInformation(5, TraceShape03b, 3);
        SymbolsByID[6] = new SymbolInformation(6, TraceShape04, 2);
        SymbolsByID[7] = new SymbolInformation(7, TraceShape04b, 3);
        SymbolsByID[8] = new SymbolInformation(8, TraceShape05, 4);
        SymbolsByID[9] = new SymbolInformation(9, TraceShape05b, 2);
        SymbolsByID[10] = new SymbolInformation(10, TraceShape01, 3);
        SymbolsByID[11] = new SymbolInformation(11, TraceShape01b, 4);
        SymbolsByID[12] = new SymbolInformation(12, TraceShape02, 2);
        SymbolsByID[13] = new SymbolInformation(13, TraceShape02b, 3);
        SymbolsByID[14] = new SymbolInformation(14, TraceShape03, 4);
        SymbolsByID[15] = new SymbolInformation(15, TraceShape03b, 2);
        SymbolsByID[16] = new SymbolInformation(16, TraceShape04, 3);
        SymbolsByID[17] = new SymbolInformation(17, TraceShape04b, 4);
        SymbolsByID[18] = new SymbolInformation(18, TraceShape05, 3);
        SymbolsByID[19] = new SymbolInformation(19, TraceShape05b, 4);
        SymbolsByID[20] = new SymbolInformation(20, TraceShape05b, 4);
        SymbolsByID[21] = new SymbolInformation(21, TraceShape05b, 4);

        TraceShapesList.Add(TraceShape01);
        TraceShapesList.Add(TraceShape01b);
        TraceShapesList.Add(TraceShape02);
        TraceShapesList.Add(TraceShape02b);
        TraceShapesList.Add(TraceShape03);
        TraceShapesList.Add(TraceShape03b);
        TraceShapesList.Add(TraceShape04);
        TraceShapesList.Add(TraceShape04b);
        TraceShapesList.Add(TraceShape05);
        TraceShapesList.Add(TraceShape05b);

        /*
        SymbolsByID[0] = new SymbolInformation(0, Zee1,  1);
        SymbolsByID[1] = new SymbolInformation(1, Zee1, 2);
        SymbolsByID[2] = new SymbolInformation(2, Zee1, 3);
        SymbolsByID[3] = new SymbolInformation(3, Ess1, 1);
        SymbolsByID[4] = new SymbolInformation(4, Ess1, 2);
        SymbolsByID[5] = new SymbolInformation(5, Ess1, 3);
        SymbolsByID[6] = new SymbolInformation(6, Swirl1, 2);
        SymbolsByID[7] = new SymbolInformation(7, Swirl1, 3);
        SymbolsByID[8] = new SymbolInformation(8, Swirl1, 4);
        SymbolsByID[9] = new SymbolInformation(9, Ribbon1, 2);
        SymbolsByID[10] = new SymbolInformation(10, Ribbon1, 3);
        SymbolsByID[11] = new SymbolInformation(11, Ribbon1, 4);
        SymbolsByID[12] = new SymbolInformation(12, Emm1, 2);
        SymbolsByID[13] = new SymbolInformation(13, Emm1, 3);
        SymbolsByID[14] = new SymbolInformation(14, Emm1, 4);
        SymbolsByID[15] = new SymbolInformation(15, Enn1, 2);
        SymbolsByID[16] = new SymbolInformation(16, Enn1, 3);
        SymbolsByID[17] = new SymbolInformation(17, Enn1, 4);
        SymbolsByID[18] = new SymbolInformation(18, Swirl1, 3);
        SymbolsByID[19] = new SymbolInformation(19, Ess1, 4);

        */


        DifficultiesByID = new Dictionary<int, DifficultyInformation>();

        DifficultiesByID[1] = new DifficultyInformation(1, 5.0f, 0.5f, 120.0f);
        DifficultiesByID[2] = new DifficultyInformation(1, 4.0f, 1.0f, 100.0f);
        DifficultiesByID[3] = new DifficultyInformation(1, 3.0f, 1.0f, 90.0f);
        DifficultiesByID[4] = new DifficultyInformation(1, 2.0f, 1.0f, 70.0f);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
