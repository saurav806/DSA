//Link:- https://www.geeksforgeeks.org/problems/binary-tree-to-cdll/1


class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    void inorder(Node *root, vector<int>&a){
        if(root == NULL) return;
        inorder(root->left,a);
        a.push_back(root->data);
        inorder(root->right,a);
    }
    Node *bTreeToCList(Node *root)
    {
    //add code here.
        vector<int> a;
        inorder(root,a);
        
        Node* head=NULL;
        Node* tail=NULL;
        
        for(auto it:a)
        {
            Node* newnode=newNode(it);
            if(!head)
            {
                head=newnode;
                tail=newnode;
            }
            else
            {
                newnode->left=tail;
                tail->right=newnode;
                tail=newnode;
            }
        }
        
        head->left=tail;
        tail->right=head;
        
        return head;
    }
};
