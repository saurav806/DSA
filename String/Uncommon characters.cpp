//Link:-https://practice.geeksforgeeks.org/problems/uncommon-characters4932/1


class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            set<char>s;
            set<char>s2;
            for(int i=0;i<A.size();i++)
                s.insert(A[i]);
            for(int i=0;i<B.size();i++){
                s2.insert(B[i]);
            }
            for(char i:s){
                if(s2.find(i)!=s2.end())
                    s2.erase(i);
                else
                    s2.insert(i);
            }
            
            string ans="";
            if(!s2.empty()){
             for(char i:s2)
                ans+=i;
            }
            
           else
            ans="-1";
            return ans;
            
            
        }
};
