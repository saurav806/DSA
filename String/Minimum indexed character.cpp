//User function template for C++
// Link:- https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<int,int>m;
        int index=0;
        for (int i=0;i<patt.size();i++){
            m[patt[i]]++;
        }
        for(int i=0;i<str.size();i++){
            if(m[str[i]]!=0)
            return i;
        }
        return -1;
    }
};
