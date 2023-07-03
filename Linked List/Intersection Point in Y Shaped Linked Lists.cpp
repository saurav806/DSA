//Link:- https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1



//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1!=temp2){
        if(!temp1)
            temp1=head2;
        if(!temp2)
            temp2=head1;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1==NULL || temp2==NULL)
        return -1;
    return temp1->data;
}
