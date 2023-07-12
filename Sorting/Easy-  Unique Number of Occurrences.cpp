//Link:- https://practice.geeksforgeeks.org/problems/unique-frequencies-of-not/1

//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto i:m)
            s.insert(i.second);
        // int size=s.size();
        if(s.size()!=m.size())
            return false;
        
        return true;
    }
};
