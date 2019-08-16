class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result (nums.size(), -1);
        stack<int> num;
        
        for(int i = 0; i < nums.size(); i++) {
            while(!num.empty() and nums[i] > nums[num.top()]) {
                result[num.top()] = nums[i];
                num.pop();
            }
            num.push(i);
        }
        
        for(int i = 0; i < nums.size(); i++) {
            while(!num.empty() and nums[i] > nums[num.top()]) {
                result[num.top()] = nums[i];
                num.pop();
            }
        }
        
        return result;
    }
};