//Link:- https://leetcode.com/problems/cousins-in-binary-tree/description/

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
    int hp(TreeNode* root, int data, int &parent, int height){
        if(root == nullptr ) return 0;
        
        if(root->val == data) 
            return height;
        parent=root->val;
        int left=hp(root->left,data,parent,height+1);
        if(left)
            return left;
        parent=root->val;
        int right=hp(root->right, data, parent, height+1);
        return right;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val== y) return false;
        int parent1=-1;
        int xheight=hp(root,x,parent1,0);
        int parent2=-1;
        int yheight=hp(root,y,parent2,0);
        if(xheight==yheight && parent1!=parent2)
            return true;
        return false; 
    }
};
