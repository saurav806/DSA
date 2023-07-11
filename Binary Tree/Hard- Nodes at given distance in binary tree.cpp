//Link:- https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1

/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
    void makeParent(map<Node* , Node*>&parent, Node*root, int target,Node * &tgt){
        queue<Node *>q;
        q.push(root);
        while(!q.empty()){
            Node *temp=q.front();
            q.pop();
            if(temp->data==target)
                tgt=temp;
            if(temp->left){
                parent[temp->left]=temp;
                q.push(temp->left);
            }
            if(temp->right){
                parent[temp->right]=temp;
                q.push(temp->right);
            }
        }
    }
public:
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        map<Node *, Node *>parent;
        Node *tgt=NULL;
        makeParent(parent,root, target, tgt);
        
        map<Node *,bool>vis;
        queue<Node*>q;
        q.push(tgt);
        vis[tgt]=true;
        while(!q.empty() && k>0){
            int size=q.size();
            
            vector<int>lev;
            while(size>0){
                Node* ele=q.front();
                q.pop();
                if(ele->left && !vis[ele->left]){
                    q.push(ele->left);
                    vis[ele->left]=true;
                }
                if(ele->right && !vis[ele->right]){
                    q.push(ele->right);
                    vis[ele->right]=true;
                }
                if(parent[ele] && !vis[parent[ele]]){
                    q.push(parent[ele]);
                    vis[parent[ele]]=true;
                }
                size--;
            }
            k--;
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->data);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
