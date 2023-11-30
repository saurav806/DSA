//Link:- https://www.geeksforgeeks.org/problems/shortest-path-from-1-to-n0156/1

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int count=0;
        while(n!=1){
            if(n%3==0){
                count++;
                n/=3;
            }
            else{
                count++;
                n-=1;
            }
        }
        return count;
    }
};
