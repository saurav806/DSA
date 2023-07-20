//Link:- https://practice.geeksforgeeks.org/problems/bst-to-greater-sum-tree/1

//User function Template for C++

/*struct Node
{
	int data;
	struct Node *left, *right;
};*/



class Solution
{
    public:
    void solve(Node * &root, int &sum){
        if(root==NULL) return;
            solve(root->right,sum);
            int k= root->data;
            root->data=sum;
            sum+= k;
            solve(root->left,sum);
    }
    void transformTree(struct Node *root)
    {
        //code here
        int sum=0;
        solve(root,sum);
    }
};
