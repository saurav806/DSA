//User function template for C++
//Link:- https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

//Technique Used:- Sliding WINDOW and deQue

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<k;i++){
            while(!dq.empty() && arr[dq.back()]<arr[i])
                dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        for(int i=k;i<n;i++){
            int val=dq.front();
            if(val==i-k)
                dq.pop_front();
            while(!dq.empty() && arr[dq.back()]<arr[i])
                dq.pop_back();
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};
