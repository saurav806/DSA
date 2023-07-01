//Link:- https://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate-1587115621/1

class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string ans="";
        for(auto i:s1){
            if(s2.find(i)==string::npos)
                ans+=i;
        }
        for(auto i:s2){
            if(s1.find(i)==string::npos)
                ans+=i;
        }
        
        return ans;
    }

};
