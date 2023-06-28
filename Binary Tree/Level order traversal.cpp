//Link:- https://practice.geeksforgeeks.org/problems/level-order-traversal/1

/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node *>q;
      vector<int>ans;
      q.push(node);
    //   ans.push_back(node->data);
      while(!q.empty()){
          Node * temp=q.front();
          ans.push_back(q.front()->data);
          q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
      }
      return ans;
    }
};
