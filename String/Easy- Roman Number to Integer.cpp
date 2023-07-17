//Link:- https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int>map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        
        int ans=0;
        for(int i=0;i<str.size();i++){
            if(i<str.size()-1 && map[str[i]]<map[str[i+1]])
                ans+= map[str[i+1]]-map[str[i++]];
            else
                ans+=map[str[i]];
        }
        return ans;
    }
};
