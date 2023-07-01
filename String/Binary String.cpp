//LInk:- https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        int ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1')
                ans++;
                
        }
        return (ans*(ans-1))/2;
        
    }

};
