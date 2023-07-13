//Link:- https://leetcode.com/problems/course-schedule-ii/submissions

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]);
        }

        vector<int>inDeg(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(int it:adj[i]){
                inDeg[it]++;
            }
        }

        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(inDeg[i]==0)
                q.push(i);
        }

        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                if(--inDeg[it]==0)
                    q.push(it);
            }
        }
        reverse(topo.begin(),topo.end());
        if(topo.size()==numCourses)
            return topo;

        return {};
    }
};
