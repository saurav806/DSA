//Link:- https://practice.geeksforgeeks.org/problems/print-anagrams-together/1

//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>ans;
        map<string,vector<string>>mp;
        for(auto it:string_list){
            string str=it;
            sort(str.begin(),str.end());
            mp[str].push_back(it);
        }
        
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
