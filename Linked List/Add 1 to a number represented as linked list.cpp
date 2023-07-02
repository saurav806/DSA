//Link:- https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1



class Solution
{
    public:
    Node *reverse(Node *head){
        
        Node *nextNode=head;
        Node *temp=NULL;
        Node *ans=NULL;
        while(nextNode!=NULL){
            temp=nextNode->next;
            nextNode->next=ans;
            ans=nextNode;
            nextNode=temp;
        }
        
        return ans;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *revList=reverse(head);
        Node *temp=revList;
        
        int carry=1;
        while(temp!=NULL){
            int num=temp->data+carry;
            int rem=num%10;
            temp->data=rem;
            carry=num/10;
            if(temp->next==NULL)
                break;
            temp=temp->next;
            
        }
        if(carry>0){
            Node *tempNode=new Node(carry);
            temp->next=tempNode;
        }
        
        
        head=reverse(revList);
        
        return head;
    }
};
