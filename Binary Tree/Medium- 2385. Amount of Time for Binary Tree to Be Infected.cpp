//Link:- https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/description/

/**
 * Definition for a binary tree TreeNode.
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

    void parentFind(TreeNode* root, TreeNode* &tar, map<TreeNode*, TreeNode*>&parent, int target){
        if(root==NULL) return ;
        if(root->val==target)
            tar=root;
        if(root->left){
            parent[root->left]=root;
            parentFind(root->left,tar,parent,target);
        }
        if(root->right){
            parent[root->right]=root;
            parentFind(root->right,tar,parent,target);
        }
    }

    int burn(TreeNode* root, map<TreeNode*, TreeNode*>&parent){
        queue<TreeNode*>q;
        q.push(root);
        map<TreeNode*, bool>visited;
        visited[root]=1;
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            bool flag=0;
            while( n-- >0){
                TreeNode* node= q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    visited[node->left] = 1;
                    q.push(node->left);
                    flag=1;
                }
                if(node->right && !visited[node->right]){
                    visited[node->right] = 1;
                    q.push(node->right);
                    flag=1;
                }
                if(parent[node] && !visited[parent[node]]){
                    visited[parent[node]] =1;
                    q.push(parent[node]);
                    flag=1;
                }
            }
            if(flag==1) ans++;
        }
        return ans;
    }

    int amountOfTime(TreeNode* root, int start) {
        TreeNode* tar ;
        map<TreeNode*, TreeNode*>parent;
        parent[root]=NULL;
        parentFind(root,tar,parent, start);
        int ans= burn(tar,parent);
        return ans;
    }
};
