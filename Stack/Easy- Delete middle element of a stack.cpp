//Link:- https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/0

//User function template for C++

class Solution
{
    private:
    void rec(stack<int>&st, int i,int n){
        if(i==n){
            st.pop();
            return;
        }
        int temp=st.top();
        st.pop();
        rec(st,i+1,n);
        st.push(temp);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
       
        rec(s,1,n/2+1);
        
    }
};
