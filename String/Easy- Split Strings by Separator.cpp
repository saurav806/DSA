//Link:- https://leetcode.com/contest/weekly-contest-355/submissions/detail/1001447786/

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(auto it:words){
            string word="";
            // bool flag=false;
            for(int i=0;i<it.size();i++){
                if(it[i] != separator){
                    word+=it[i];
                    // flag=true;/
                }
                if( (it[i] == separator || i == it.size()-1 ) && !word.empty()){
                    ans.push_back(word);
                    word = "";
                    // flag=false;
                }
            }
        }
        return ans;
    }
                        
};
