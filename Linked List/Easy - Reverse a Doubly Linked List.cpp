//Link:- https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1


class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node * temp = head;
        while(head->next!=NULL){
            temp = head->prev;
            head->prev = head->next;
            head->next = temp;
            head = head->prev;
        }
        head->next = head->prev;
        head->prev = NULL;
        return head;
    }
};
