#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp;
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;
        for(int i = 0; i < strs.size(); i++) {
            temp = strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }
        
        for(auto i : map) {
            result.push_back(i.second);
        }
        
        return result;
        

    }
};