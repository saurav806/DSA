//Link:- https://practice.geeksforgeeks.org/problems/lucky-numbers2911/0

//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
private:
    bool luck(int n,int i){
        if(n<i)
            return true;
        if(n%i==0)
            return false;
        return luck(n-(n/i),i+1);
    }
public:
    bool isLucky(int n) {
        // code here
        return luck(n,2);
    }
};
