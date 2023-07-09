//Link:- https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* third=new Node(0);
    Node *copy=third;
    while(head1!=NULL && head2!=NULL){
        if(head1->data == head2->data){
            Node *temp=new Node(head1->data);
            third->next=temp;
            third=third->next;
            // third->next=NULL;
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data < head2->data)
            head1=head1->next;
        else
            head2=head2->next;
    }
    return copy->next;
    
    
    
}
