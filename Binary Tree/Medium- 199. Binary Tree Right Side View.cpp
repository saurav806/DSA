//Link:- https://leetcode.com/problems/binary-tree-right-side-view/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void view(TreeNode* root, vector<int>&ans, int level){
        if(not root) return;
        if(level==ans.size()) ans.push_back(root->val);
        view(root->right, ans, level+1);
        view(root->left, ans, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        view(root,ans,0);
        return ans;
    }
};
