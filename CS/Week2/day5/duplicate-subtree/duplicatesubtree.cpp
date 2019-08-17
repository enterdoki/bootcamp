#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

};

class Solution {
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return result;
    }
    
    // DFS helper function to build unique strings
    string dfs(TreeNode *root) {
        if(root == nullptr)
            return "#";
        
        string unique = to_string(root->val) + dfs(root->left) + dfs(root->right);
        
        if(map.find(unique) != map.end() && map[unique] == 1)
            result.push_back(root);
        
        map[unique]++;
        return unique;
        
    }
private:
    vector<TreeNode *> result;
    unordered_map<string, int> map;
};