//Link:- https://leetcode.com/problems/add-two-numbers-ii/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rev(ListNode * head){
        if(head==NULL || head->next==NULL)
            return head;
            
        ListNode *curr=head;
        ListNode *pre=NULL;
        
        while(curr!=NULL){
            cout<<0<<endl;
            ListNode *temp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=temp;
        }
        return pre;
    }

    ListNode* helper(ListNode* head1, ListNode* head2){
        int carry=0;
        ListNode* ans=new ListNode(0);
        ListNode* result= ans;
        while(head1 != NULL || head2!=NULL || carry != 0){
            int d1= (head1 != NULL)?head1->val:0;
            int d2= (head2 != NULL)?head2->val:0;
            int sum= d1 + d2 + carry;
            int rem= sum%10;
            carry = sum/10;
            ListNode * temp = new ListNode(rem);
            ans->next=temp;
            ans=ans->next;
            
            head1=(head1 != NULL) ? head1->next:NULL;
            head2=(head2 != NULL) ? head2->next:NULL;
        }

        return result->next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=  rev(l1);
        l2= rev(l2);
        ListNode *ans=helper(l1,l2);
        return rev(ans);
    }
};
