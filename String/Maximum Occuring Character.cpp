//Link:- https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>Char;
        int max=0;
        char ans=str[0];
        for(int i=0;i<str.size();i++){
            Char[str[i]]++;
            if(Char[str[i]]>max){
                ans=str[i];
                max=Char[str[i]];
            }
            else if(Char[str[i]]==max && str[i]<ans)
                ans=str[i];
        }
        return ans;
        
    }

};
