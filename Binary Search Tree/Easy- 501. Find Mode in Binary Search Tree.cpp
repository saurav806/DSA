//Link:- https://leetcode.com/problems/find-mode-in-binary-search-tree/description/

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
    void preorder(TreeNode* root, map<int,int>&mp, int &grt){
        if(root==NULL) return ;
        mp[root->val]++;
        grt=max(grt,mp[root->val]);
        preorder(root->left,mp,grt);
        preorder(root->right,mp,grt);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int>mp;
        int grt=0;
        vector<int>ans;
        preorder(root,mp,grt,);
        for(auto it:mp){
            if(it.second==grt)
                ans.push_back(it.first);
        }
        return ans;
    }
};
