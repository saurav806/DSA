//Link:- https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
//Tehcnique Used:- Recusrion

/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *second=head;
        node *nextNode=NULL;
        node *temp=NULL;
        int count=0;
        while(second!=NULL && count<k){
            nextNode= second->next;
            second->next=temp;
            temp=second;
            second=nextNode;
            count++;
        }
        if(nextNode!=NULL)
            head->next=reverse(nextNode,k);
        return temp;
    }
};
