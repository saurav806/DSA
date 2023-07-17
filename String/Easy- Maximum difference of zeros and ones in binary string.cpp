
//Link:- https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1

//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int ans=-1;
	    int temp=0;
	    for(int i=0;i<S.size();i++){
	        int x= S[i]=='0' ? 1:-1;
	        temp+=x;
	        if(temp>ans) ans=temp;
	        if(temp<0) temp=0;
	    }
	    return ans;
	}
};
