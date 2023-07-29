//Link:- https://practice.geeksforgeeks.org/problems/burning-tree/1

//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
    void parentFind(Node* root, Node* &tar, map<Node*, Node*>&parent, int target){
        if(root==NULL) return ;
        if(root->data==target)
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
    
    int burn(Node* root, map<Node*, Node*>&parent){
        queue<Node*>q;
        q.push(root);
        map<Node*, bool>visited;
        visited[root]=1;
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            bool flag=0;
            while( n-- >0){
                Node* node= q.front();
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
    
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        Node* tar ;
        map<Node*, Node*>parent;
        parent[root]=NULL;
        parentFind(root,tar,parent, target);
        int ans= burn(tar,parent);
        return ans;
    }
};
