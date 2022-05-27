using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class FriendMapObject : MapObject
    {
        [SerializeField] private FriendsList friendsList;
        [SerializeField] private MapFriendWidget friendWidget;

        public override void HandleTap(bool inInteractionRange)
        {
            base.HandleTap(inInteractionRange);
            Debug.Log("Tapped on Friend " + inInteractionRange);
        }

        public override void SetProximityListeners()
        {
            throw new System.NotImplementedException();
        }
        
        public override void SetWorldMapValueChangedListeners(bool isWorldMap)
        {
            throw new System.NotImplementedException();
        }

        public override void Initialize(MapObjectDataEntry entry)
        {
            base.Initialize(entry);
            friendWidget.SetData(friendsList.GetFriendInfo(DataEntry.id));
        }
        
        
        
    }
}
