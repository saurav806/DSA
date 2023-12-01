//Link:- https://www.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1


class Solution{
  public:
    bool fun(Node *root, vector<bool>&vis){
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL){
            if(root->data==1 || (vis[root->data-1] && vis[root->data+1])){
                return true;
            }
            return false;
        }
        vis[root->data]=true;
        return fun(root->left,vis)||fun(root->right,vis);
    }
    
    bool isDeadEnd(Node *root)
    {
        vector<bool> vis(10005,false);
        return fun(root,vis);
    }
};
