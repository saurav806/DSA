//Link:- https://practice.geeksforgeeks.org/problems/da62a798bca208c7a678c133569c3dc7f5b73500/1

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

class Solution {
private:
    Node *merge(Node *root, Node *nroot){
        Node *temp= new Node(0);
        Node *res=temp;
        while(root!=NULL && nroot!= NULL){
           if(root->data < nroot->data){
               temp->bottom=root;
               temp=temp->bottom;
               root=root->bottom;
           }
           else{
               temp->bottom=nroot;
               temp=temp->bottom;
               nroot=nroot->bottom;
           }
        }
        
        if(root)
            temp->bottom=root;
        else
            temp->bottom=nroot;
        
        return res->bottom;
            
    }
public:
    Node *flatten(Node *root)
    {
        // Your code here
        if(root== NULL || root->next== NULL)
        return root;
        root->next=flatten(root->next);
        
        root=merge(root,root->next);
        
        return root;
    }
};
