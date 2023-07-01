//Link:- https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1

//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        vector<int>ans(26,0);
        for(int i=0;i<str.size();i++){
            if(str[i]>='a' && str[i]<='z')
                ans[str[i]-97]++;
            else if(str[i]>='A' && str[i]<='Z')
                ans[str[i]-65]++;
        }
        
        for(int i:ans){
            if(i==0)
                return false;
        }
        return true;
    }

};
