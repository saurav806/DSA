//Link:- https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1

class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        vector<int>m(256,-1);
        int count=0;
        int start=-1;
        for(int curr=0;curr<S.size();curr++){
            
            if(m[S[curr]]>-1){
                start=max(m[S[curr]], start);
                
            }
            m[S[curr]]=curr;
            count=max(count,curr-start);
        }
        return count;
    }
};
