#include <iostream>
#include <vector>

using namespace std;

class MyHashSet {
public:
    /** Initialize your data structure here. */
    public:
        MyHashSet():hash_set(1000001, false) {
        }

        void add(int key) {
            hash_set[key] = true;
        }

        void remove(int key) {
            hash_set[key] = false;
        }

        /** Returns true if this set contains the specified element */
        bool contains(int key) {
            return hash_set[key];

        }
    private:
        vector<bool> hash_set;
};


class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap():hash_map(1000001, -1) {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        hash_map[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return hash_map[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        hash_map[key] = -1;
    }
private:
    vector<int> hash_map;
};