// link:- https://www.geeksforgeeks.org/problems/symmetric-tree/1

class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool docheck(struct Node *head1 , struct Node *head2){
        if(head1 == nullptr && head2 == nullptr)
         return true;
         if(head1 == NULL || head2 == NULL || head1 ->data != head2 -> data)
             return false;
          return docheck(head1 -> left,head2 -> right) 
                &&  docheck(head1 -> right,head2 -> left);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root == NULL)
	     return true;
	    return docheck(root -> left,root -> right);
    }
};
