//#define VERBOSE_LOG

using System.Collections.Generic;
using System.Linq;
using UnityEngine;
// Adapted from: https://medium.com/@peterkellyonline/weighted-random-selection-3ff222917eb6
//
// Usage:
//      public WeightedRandomList<ObjectType> ListName = new WeightedRandomList<ObjectType>();
//      ListName.Add(item, (int)weight);
//      ObjectType randomItem = ListName.GetRandomElement();

public class WeightedRandomList<T>
{
    HashSet<WeightedPair> list;
    float totalWeights = 0;

    internal class WeightedPair
    {
        public T data;
        public float weight;
        public WeightedPair(T inData, float inWeight)
        {
            data = inData;
            weight = inWeight;
        }
    }

    public WeightedRandomList()
    {
        list = new HashSet<WeightedPair>();
    }

    public void Add(T inData, float inWeight)
    {
        totalWeights += inWeight;
        list.Add(new WeightedPair(inData, inWeight));
    }
    
    public void Add(List<T> inData, float inWeight)
    {
        totalWeights += inWeight * inData.Count;
        foreach (T item in inData)
        {
            list.Add(new WeightedPair(item, inWeight));
        }
    }

    public T GetRandomElement()
    {
        float index = Random.Range(1, totalWeights);
#if VERBOSE_LOG
        Debug.Log("Weighted list drew " + index.ToString("N0") + " against TOTAL: " + totalWeights.ToString("N0"));
#endif
        foreach (WeightedPair pair in list)
        {
            index -= pair.weight;

#if VERBOSE_LOG
            if (pair.data != null)
            {
                Debug.Log("Subtracting " + pair.weight.ToString("N0") + " from " + pair.data.ToString() + " resulting in " + index.ToString("N0"));
            }
            else
            {
                Debug.Log("Subtracting " + pair.weight.ToString("N0") + " from a null data value" + " resulting in " + index.ToString("N0"));
            }

#endif
            if (index <= 0)
            {
                return pair.data;
            }
        }
        
        return default(T);
    }

    // If I just want a random one from the list
    public T GetRandomElementNonWeighted()
    {
        int index = Random.Range(0, list.Count);
        foreach (WeightedPair pair in list)
        {
            if (index-- == 0)
                return pair.data;
        }

        return default(T);
    }

    public int Count { get { return list.Count; } }
    internal float Weights { get { return totalWeights; } }
    public List<T> Keys
    {
        get
        {
            List<T> retval = new List<T>();
            foreach(WeightedPair pair in list)
            {
                retval.Add(pair.data);
            }
            return retval;
        }
    }

   public WeightedRandomList<T> Clone()
    {
        WeightedRandomList<T> retval = new WeightedRandomList<T>();
        foreach (WeightedPair pair in list)
        {
            retval.Add(pair.data, pair.weight);
        }
        return retval;
    }

    public void Clear()
    {
        totalWeights = 0;
        list.Clear();
    }
}