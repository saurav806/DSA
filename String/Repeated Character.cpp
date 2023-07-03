//Link:- https://practice.geeksforgeeks.org/problems/repeated-character2058/1


class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        map<char,int>s1;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(s1[s[i]]>1)
                return s[i];
        }
        
        return '#';
    }
};
