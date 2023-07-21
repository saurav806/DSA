//Link:- https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/description/

//Approach 1.

class Solution {
public:
    int sum=0;
    void solve(TreeNode* root){
        if(root==NULL) return ;
        if(root->left) sum+=root->left->val;
        if(root->right) sum+=root->right->val;
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->val %2 == 0) {
            if(root->left) solve(root->left);
            if(root->right) solve(root->right);
        }
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);
        return sum;
    }
};
