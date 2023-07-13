//Link:- https://leetcode.com/problems/course-schedule/submissions/993340383/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
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

        if(topo.size()==numCourses)
            return true;

        return false;
    }
};
