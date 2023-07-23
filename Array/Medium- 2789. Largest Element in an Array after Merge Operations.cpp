//Link:- https://leetcode.com/problems/largest-element-in-an-array-after-merge-operations/

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        
        int n=nums.size();
        stack<long long>st;
        st.push((long long)(nums[n-1]));
        long long ans=nums[n-1];
        for(int i=n-2;i>=0;i--){
            long long val= nums[i];
            long long stOp=st.top();
            if(val<=st.top()){
                st.pop();
                st.push(val+stOp);
            }
            else{
                st.pop();
                st.push(val);
            }
            ans= max(ans,st.top());
        }
        return ans;
    }
};
