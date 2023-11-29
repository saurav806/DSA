//Link:- https://www.geeksforgeeks.org/problems/euler-circuit-and-path/1


class Solution{
    public int isEulerCircuit(int V, List<Integer>[] adj) 
    {
        // code here
        int e=0,od=0;
       for(int i=0;i<V;i++){
           if(adj[i].size()%2==0){
               e++;
           }
           else od++;
       }
       if(e==V)return 2;
       if(od>0 && od==2)return 1;
       return 0;
    }
}
