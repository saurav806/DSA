//Link:- https://practice.geeksforgeeks.org/problems/equal-to-product3836/1

//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            if(arr[i]!=0 && x%arr[i]==0 )
            if(s.find(x/arr[i]) != s.end())
                return true;
            s.insert(arr[i]);
        }
        return false;
    }
};
