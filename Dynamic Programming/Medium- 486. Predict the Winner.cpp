//Link:- https://leetcode.com/problems/predict-the-winner/description/

class Solution {
public:
    int win(vector<int>&nums, int l, int r,vector<vector<int>>&mem){
        if(l>r) return 0;
        if(mem[l][r]!=-1) return mem[l][r];
        int leftscore = nums[l] - win(nums,l+1,r,mem);
        int rightscore = nums[r] - win(nums,l,r -1,mem);

        return mem[l][r]=max(leftscore,rightscore);

    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>mem(n,vector<int>(n,-1));
        int diff=win(nums,0,nums.size()-1,mem);
        return diff>=0;
    }
};
