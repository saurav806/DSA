//Link:- https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1
//Tehcniwue Used Masking

// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        
        //Example:- x=44, y=3, l=1, r=5
        //Create a mask of 1 = 00000001
        int mask1=1;
        //left shift the mask 00011111
        mask1=mask1<<(r-l+1);
        //subtract 1 from the mask = 00001111
        mask1-=1;
        //left shift again 00001111
        mask1=mask1<<(l-1);
        //and operator with the y= 00000011
        int mask2=mask1&y;
        //result will be OR between mask2 and x : 101111 wihch is 47
        return mask2|x;
        
    }
};
