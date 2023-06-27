//Link:- https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1

/*
// structure of the node is as follows

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
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int>s;
        while(head1!=NULL || head2!=NULL){
            if(head1!=NULL){
                s.insert(head1->data);
                head1=head1->next;
            }
            if(head2!=NULL){
                s.insert(head2->data);
                head2=head2->next;
            }
            
        }
        struct Node* ans=new Node(0);
        struct Node *t=ans;
        // for(int i=0;i<s.size();i++){
        for(int i:s){
            struct Node *temp=new Node(i);
            ans->next=temp;
            ans=ans->next;
        }
        return t->next;
        
        
        
    }
};