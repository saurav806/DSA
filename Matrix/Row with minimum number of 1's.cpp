//Link:- https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1

// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        // code here
        int min=INT_MAX;
        int index=0;
        for(int i=0;i<N;i++){
            int cOne=0;
            for(int j=0;j<M;j++){
                if(A[i][j]==1)
                    cOne++;
            }
            if(cOne<min){
                index=i+1;
                min=cOne;
            }
        }
        return index;
    }
};
