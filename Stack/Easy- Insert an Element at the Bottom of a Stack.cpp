//Link:- https://practice.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

//User function Template for C++

class Solution{
public:
    stack<int> stak(stack<int>&s, int x){
        if(s.empty())
            s.push(x);
        else{
            int temp=s.top();
            s.pop();
            stak(s,x);
            s.push(temp);
        }
        return s;
    }
    
    stack<int> insertAtBottom(stack<int> St,int X){
        
        return stak(St,X);
    }
};
