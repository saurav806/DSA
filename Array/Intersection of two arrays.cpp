//Link:- https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        
        int count=0;
        if(m>n){
            set<int>Hash(a,a+n);
            for(int i=0;i<m;i++){
                if(Hash.find(b[i])!=Hash.end()){
                    count++;
                    Hash.erase(b[i]);
                }
            }
        }
        else{
            set<int>Hash(b,b+m);
            for(int i=0;i<n;i++){
                if(Hash.find(a[i])!=Hash.end()){
                    count++;
                    Hash.erase(a[i]);
                }
            }
        }
        return count;
        
        
    }
};
