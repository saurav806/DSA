//Link:- https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int best = 0;
        for(int i=0;i<n/2;i++){
            best = max(best, nums[i]+nums[n-i-1]);
        }
        return best;
    }
};
