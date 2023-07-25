//Link:- https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
    if(root==NULL) return ans;
    queue<TreeNode *>q;
    q.push(root);
    while(not q.empty()){
        vector<int>temp;
        int n=q.size();
        while(n-- > 0){
            TreeNode *root=q.front();
            q.pop();
            temp.push_back(root->val);
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
        }
        ans.push_back(temp);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
