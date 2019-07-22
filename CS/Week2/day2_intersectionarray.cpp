#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1(nums1.begin(), nums1.end());
        unordered_set<int> num2;
        vector<int> result;
        for(int i = 0; i < nums2.size(); i++) {
            if(num1.find(nums2[i]) != num1.end()) 
                num2.insert(nums2[i]);
        }
        for(auto i : num2)
            result.push_back(i);
        return result;
    }
};