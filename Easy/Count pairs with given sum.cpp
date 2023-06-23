//User function template for C++

//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int>m;
        int count=0;
        for(int i=0;i<n;i++){
            int b=k-arr[i];
            if(m.find(b)!=m.end())
                count += m[b];
            m[arr[i]]++;
            
            
        }
        return count;
    }
};