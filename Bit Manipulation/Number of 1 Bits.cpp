//Link:-https://practice.geeksforgeeks.org/problems/set-bits0143/1

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N>0){
            if(N&1==1)
            count++;
            N=N>>1;
        }
        return count;
    }
};
