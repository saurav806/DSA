//Link: - https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node *root, vector<int>&v){
        if(!root) return ;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    void ansInorder(Node *root, vector<int>v, int &i){
        if(!root) return ;
        ansInorder(root->left, v, i);
        root->data = v[i++];
        ansInorder(root->right, v, i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        inorder(root, v);
        sort(v.begin(), v.end());
        int i=0;
        ansInorder(root, v, i);
        return root;
    }
};
