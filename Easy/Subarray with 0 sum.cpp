//LINK: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>m;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum==0 || m.find(sum)!=m.end())
                return true;
            else
                m.insert(sum);
        }
        
        return false;
    }
};
