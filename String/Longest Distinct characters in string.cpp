//Link:- https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1

int longestSubstrDistinctChars (string S)
{
    // your code here
    int count=0;
    int start=-1;
    vector<int>dict(256,-1);
    for(int end=0;end<S.size();end++){
        if(dict[S[end]]>start)
            start=dict[S[end]];
        dict[S[end]]=end;
        count=max(count,end-start);
    }
    return count;
}
