//Link:- https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        map<char,int>count;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
            if(count[s[i]]>1)
                return false;
        }
        return true;
    }
};
