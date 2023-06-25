//Link:- https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

//Technique used:- Prefix Sum

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>ans;
        long long sum=0;
        int start=0;
        for(int end=0;end<n;end++){
            sum+=arr[end];
            while(sum>s && start<end){
                sum-=arr[start];
                start++;
            }
            if(sum==s){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
        }
        return {-1};
    }
};
