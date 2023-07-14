//Link:- https://practice.geeksforgeeks.org/problems/longest-sub-sequence-such-that-difference-between-adjacents-is-one2558/1

class Solution{
    public:
    int longLenSub(int arr[], int n)
    {
        // Complete the function
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<n;i++){
            int temp=arr[i]-1;
            int temp2=1+arr[i];
            int tempAns=0;
            int tempAns2=0;
            
            if(m.count(temp))
                tempAns=m[temp];
            if(m.count(temp2))
                tempAns2=m[temp2];
            tempAns=max(tempAns,tempAns2);
            m[arr[i]]=1+tempAns;
            ans=max(ans,m[arr[i]]);
        }
        return ans;
    }
};
