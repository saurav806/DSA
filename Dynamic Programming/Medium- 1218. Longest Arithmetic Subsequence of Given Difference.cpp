//Link:- https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/description/

class Solution {
public:
    
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>m;
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int temp=arr[i]-difference;
            int tempAns=0;
            if(m.find(temp)!=m.end())
                tempAns=m[temp];
            m[arr[i]]=1+tempAns;
            ans= max(ans,m[arr[i]]);
        }
        return ans;

    }
};
