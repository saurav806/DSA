// Link:- https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1
// Technique used:- Two pointer approach

/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    Node* slow=head;
    Node* fast=head;
    Node* prev;
    if(!head->next)
        return NULL;
        
    while(fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        if(fast->next->next!=NULL)
        fast=fast->next->next;
        else
        fast=fast->next;
    }
    prev->next=slow->next;
    // cout<<prev->data;
    return head;
    
}
