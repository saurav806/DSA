//Link:- https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution
{
    public:
    
    string reverseWords(string S) 
    { 
        // code here 
        string temp="";
        string ans="";
        int i=S.size();
        for(;i>=0;i--){
            if(S[i]=='.'){
                temp=temp+S[i];
                ans=ans+temp;
                temp="";
            }
            else{
            temp=S[i]+temp;
            }
        }
        ans=ans+temp;
        return ans;
    } 
};
