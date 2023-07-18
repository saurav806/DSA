//link:- https://leetcode.com/problems/minimum-window-substring/description/

class Solution {
public:

    
    string minWindow(string str, string t) {

        unordered_map<char,int>s;
        if(str.size()<t.size()) return "";
        if(str == t) return t;

        for(int i=0;i<t.size();i++){
            s[t[i]]++;
        }
        unordered_map<char,int>m;
        int n=t.size();
        int count=0;
        int start=0;
        int last=0;
        int min_length=1e9;
        int sindex=-1;
        while(last < str.size()){
            m[str[last]]++;
            if(m[str[last]] <= s[str[last]]) count++;

            if(count==n){
               while(m[str[start]] > s[str[start]]){
                    m[str[start]]--;
                    start++;
               }
               if(min_length > last-start+1){
                   min_length = last-start+1;
                    sindex = start;
               }
            }
            last++;
        }
        if(sindex == -1) return "";
        else return str.substr(sindex, min_length);
    }
};
