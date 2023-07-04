//Link:- https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1)
            return 0;
        long long prod=1;
        int count=0;
        int start=0;
        int end=0;
        while(end<n){
            prod*=a[end];
            while(prod>=k){
                prod/=a[start];
                start++;
            }
            count+=(end-start+1);
            end++;
        }
        return count;
    }
};
