
//Link:- https://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum0128/1
//Technique used:- Unordered Map & Prefix sum

class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int>m;
        int curr_sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            if(curr_sum==sum)
                count++;
            if(m.find(curr_sum-sum)!=m.end())
                count+=m[curr_sum-sum];
            m[curr_sum]++;
        }
        return count;
        
    }
};
