#include <iostream>
#include <vector>
#include <unordered_set>

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
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        for(int i = 0; i < nums.size(); i++) {
            if(unique.find(nums[i]) != unique.end())
                return true;
            unique.insert(nums[i]);
        }
        return false;
    }
};

