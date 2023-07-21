//Link:- https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/description/

//Approach 1.

class Solution {
public:
    int sum=0;
    void solve(TreeNode* root){
        if(root==NULL) return ;
        if(root->left) sum+=root->left->val;
        if(root->right) sum+=root->right->val;
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->val %2 == 0) {
            if(root->left) solve(root->left);
            if(root->right) solve(root->right);
        }
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);
        return sum;
    }
};


//Approach 2. BFS

class Solution {
public:
    int sumOf(queue<pair<TreeNode*,TreeNode*>>&parent,int &sum){
        while(parent.size()!=0){
            int n=parent.size();
            while(n-- > 0){
                TreeNode * gParent=parent.front().second;
                TreeNode * baap = parent.front().first;
                parent.pop();
                    if(baap->left){
                        if(gParent->val %2 == 0)
                            sum+=(baap->left->val);
                        parent.push({baap->left,baap});
                    }
                    if(baap->right){
                        if(gParent->val %2 == 0)
                            sum+=(baap->right->val);
                        parent.push({baap->right,baap});
                    }
            }
        }
        return sum;
    }
    int sumEvenGrandparent(TreeNode* root) {
        queue<pair<TreeNode*, TreeNode*>>parent;
        if(root->right)
        parent.push({root->right,root});
        if(root->left)
        parent.push({root->left,root});
        int sum=0;
        return sumOf(parent,sum);;
    }
};
