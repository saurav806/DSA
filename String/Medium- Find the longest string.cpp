//Link:- https://practice.geeksforgeeks.org/problems/8d157f11af5416087251513cfc38ffc4d23be308/1

//User function Template for C++


class Solution
{
public:
    static bool cmp(string a, string b){
        if(a.length() != b.length() )
            return a.length() > b.length();
        return a<b;
    }
    string longestString(vector<string> &words)
    {
        // code here
        unordered_set<string>s;
        for(int i=0;i<words.size();i++){
                s.insert(words[i]);
        }
        
        sort(words.begin(),words.end(),cmp);
       
        
        for(int i= 0;i<words.size();i++){
             bool flag=true;
             string str="";
            for(int j=0;j<words[i].size();j++){
                str += words[i][j];
                if(s.find(str)==s.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)
                return words[i];
        }
        return "";
    }
};
