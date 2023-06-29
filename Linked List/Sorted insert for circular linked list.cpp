//Link:- https://practice.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1


/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
      Node *ans=head;
      Node *pre=head;
      Node*curr=head->next;
      if(pre->data>data){
          while(curr->data!=ans->data){
              pre=curr;
            curr=curr->next;
          }
          Node*temp=new Node(data);
          temp->next=curr;
          pre->next=temp;
          return temp;
          
      }
      else{
      while(curr->data<data){
          pre=curr;
          curr=curr->next;
      }
      Node*temp=new Node(data);
      temp->next=curr;
      pre->next=temp;
       
       return ans;
      }
    }
};
