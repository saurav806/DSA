//Link:- https://practice.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1

//User function Template for C++

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void sib(Node*root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    sib(root->left,ans);
    sib(root->right,ans);
    
    if((root->left && !root->right)|| !root->left && root->right )
        ans.push_back(root->left?root->left->data:root->right->data);
}

vector<int> noSibling(Node* node)
{
    // code here
    vector<int>ans;
    sib(node,ans);
    sort(ans.begin(),ans.end());
    if(!ans.size())
        ans.push_back(-1);
    return ans;
    
}
