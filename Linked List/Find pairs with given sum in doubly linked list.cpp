//Link:- https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/0


//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>>ans;
        Node *end=head;
        while(end->next!=NULL){
            end=end->next;
        }
        while(head!=end){
            int a=head->data;
            int b=end->data;
            if(a+b == target){
                ans.push_back({a,b});
                head=head->next;
                continue;
            }
            if(a+b >target)
                end=end->prev;
            else
                head=head->next;
        }
        return ans;
        
    }
};
