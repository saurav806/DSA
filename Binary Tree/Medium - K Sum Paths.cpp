//Link:- https://www.geeksforgeeks.org/problems/k-sum-paths/1

class Solution{
    public:
    
    void help(Node* root,int& ans,int& sum,int k,unordered_map<int,int>& mp)
    {
        //base case
        if(!root)
        return ;
        
        //small calculation
        //recursive calls
        sum+=root->data;
        if(mp.count(sum-k))
        ans+=mp[sum-k];
        
        if(sum==k)
        ans++;
        
        mp[sum]++;
        help(root->left,ans,sum,k,mp);
        help(root->right,ans,sum,k,mp);
        mp[sum]--;
        sum-=root->data;
        
    }
    
    int sumK(Node *root,int k)
    {
        unordered_map<int,int> mp;
        int sum=0;
        int ans=0;
        help(root,ans,sum,k,mp);
        return ans;
    }
};
