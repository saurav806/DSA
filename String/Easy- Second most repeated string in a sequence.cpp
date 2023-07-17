//Link:- https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        priority_queue<pair<int,string>>pq;
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            
        }
        for(auto it:m){
            // cout<<it.first<<" "<<it.second<<endl;
            pq.push({it.second,it.first});
        }
        
        
        pq.pop();
        if(pq.size()<1)
            return "";
        return pq.top().second;
    }
};
