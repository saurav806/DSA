//User function Template for C++
//Link:- https://practice.geeksforgeeks.org/problems/reverse-a-stack/1


//Recursive approach

class Solution{
public:
    void recSt(stack<int> &St, int x){
        if(St.empty()){
            St.push(x);
            return;
        }
        int temp=St.top();
        St.pop();
        recSt(St,x);
        St.push(temp);
        
    }

    void Reverse(stack<int> &St){
        if(St.empty())
            return ;
        int temp=St.top();
        St.pop();
        Reverse(St);
        // St.push(temp);
        recSt(St,temp);
    }
};


//Iterative approach

//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &St){
        stack<int>s;
        while(!St.empty()){
            s.push(St.top());
            St.pop();
        }
        St=s;
    }
};