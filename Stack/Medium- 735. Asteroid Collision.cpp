//Link:- https://leetcode.com/problems/asteroid-collision/description/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>q;
        for(auto it: asteroids){
            if(it>0)
                q.push(it);
            else{
                bool flag=false;
                while(!q.empty() && abs(it)>=q.top() && q.top()>0){
                    
                    if(q.top()==abs(it)){
                        flag=true;
                        q.pop();
                        break;
                    }
                    q.pop();
                }
                if(flag) continue;
                if(q.empty() || q.top()<0)
                    q.push(it);
            }
        }
        vector<int>ans;
        int n=q.size();
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
