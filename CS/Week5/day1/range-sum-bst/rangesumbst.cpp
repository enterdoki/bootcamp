class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        
        if(root == nullptr)
            return 0;
        
        if(root->val >= L && root->val <= R) {
            sum += root->val;
            sum += rangeSumBST(root->left, L, R);
            sum += rangeSumBST(root->right, L, R);
        }
            
        else if(root->val < L) 
            sum = rangeSumBST(root->right, L, R);
        else if(root->val > R)
            sum = rangeSumBST(root->left, L, R);
        
        
        return sum;
    }
};