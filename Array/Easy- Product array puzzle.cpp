//Link:- https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1

//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        long long pro=nums[0];
        int zero=0;
        for(int i=1;i<n;i++){
            if(nums[i]==0)
                zero++;
            else
                pro*=nums[i];
            if(zero>1)
                break;
        }
        
        vector<long long>p;
        for(int i=0;i<n;i++){
            if(zero==1){
                if(nums[i]==0)
                    p.push_back(pro);
                else
                    p.push_back(0);
            }
            else if(zero>1)
                p.push_back(0);
            else
                p.push_back(pro/nums[i]);
        }
        return p;
        
    }
};
