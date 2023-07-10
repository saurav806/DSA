//Link:- https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

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

    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int left= minDepth(root->left)+1;
        int right= minDepth(root->right)+1;
        if((root->left == NULL && root->right) || (root->left && root->right == NULL))
            return max(left,right);
        return min(left,right);
    }
};
