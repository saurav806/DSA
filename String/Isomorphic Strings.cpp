//Link:- https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size()!=str2.size())
            return false;
        map<char,char>mapped;
        map<char,bool>used;
        for(int i=0;i<str1.size();i++){
            char ch1=str1[i];
            char ch2=str2[i];
            
            if(mapped.find(ch1)!=mapped.end()){
                if(mapped[ch1]!=ch2)
                    return false;
            }
            else{ 
                if(used[ch2])
                    return false;
                else{
                    mapped[ch1]=ch2;
                    used[ch2]=true;
                }
            }
        }
        return true;
    }
};
