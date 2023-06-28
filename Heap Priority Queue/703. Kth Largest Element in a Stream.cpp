//Link:- https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(auto i:nums){
            if(pq.size()<k)
                pq.push(i);
            else if(pq.size()==k && i>pq.top())
                pq.push(i);
            if(pq.size()>k)
                pq.pop();
        }
    }
    
    int add(int val) {
        // pq.push(val);
        if(pq.size()<size)
                pq.push(val);
            else if(pq.size()==size && val>pq.top())
                pq.push(val);
        if(pq.size()>size)
            pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */