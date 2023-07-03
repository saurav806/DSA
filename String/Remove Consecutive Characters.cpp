//Link:- https://practice.geeksforgeeks.org/problems/consecutive-elements2306/0


class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans="";
        ans+=S[0];
        for(int i=1;i<S.size();i++){
            if(S[i]!=S[i-1])
                ans+=S[i];
        }
        return ans;
    }
};
