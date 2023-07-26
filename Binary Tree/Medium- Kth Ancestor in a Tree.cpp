//Link:- https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
int anc(Node* root, int &k, int node,int &ans){
    if(not root) return 0;
    int flag=0;
    if(root->data == node) return 1;
    
    int l= anc(root->left,k,node,ans);
    int r=anc(root->right,k,node,ans);
    
    if(l||r){
        k--;
        if(k==0) ans=root->data;
        return 1;
    }
    return 0;
}

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    int ans=-1;
    anc(root,k,node,ans);
    return ans;
}
