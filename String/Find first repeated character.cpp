//Link:- https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1

string firstRepChar(string s)
{   
    map<char,int>m;
    string ans="";
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
        if(m[s[i]]>1){
            ans+=s[i];
            return ans;
        }
    }
    return "-1";
}
