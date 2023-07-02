//Link:- https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(head==NULL || head->next==NULL)
            return head;
        Node*start=head;
        int count=1;
        while(start->next!=NULL){
            count++;
            start=start->next;
        }
        
        k=k%count;
        start->next=head;
        while(k>0){
            k--;
            start=start->next;
        }
        head=start->next;
        start->next=NULL;
        return head;
        
    }
};
