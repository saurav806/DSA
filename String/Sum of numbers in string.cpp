//Link:- https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/1

class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int ans=0;
    	int num=0;
    	for(int i=0;i<str.size();i++){
    	    if(str[i]>='0' && str[i]<='9')
    	        num=num*10+(str[i]-'0');
    	    else{
    	        ans+=num;
    	        num=0;
    	    }
    	}
    	return ans+num;
    	
    }
};
