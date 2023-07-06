//Link:- https://practice.geeksforgeeks.org/problems/k-closest-elements3619/1

// User function template for C++

class Solution {
  public:
  struct comp{
      bool operator() (pair<int,int>a, pair<int,int>b){
          if(a.first==b.first)
            return a.second<b.second;
          return a.first>b.first;
      }
  };
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        priority_queue<pair<int,int>, vector<pair<int,int>>,comp>pq;
        for(int i=0;i<n;i++){
            if(arr[i]-x !=0)
                pq.push(make_pair(abs(arr[i]-x),i));
        }
        
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }
        
        return ans;
        
    }
};
