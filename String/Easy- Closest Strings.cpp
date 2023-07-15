//Link:- https://practice.geeksforgeeks.org/problems/closest-strings0611/1

//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int mini=INT_MAX;
		int start=INT_MAX;
		int end=INT_MAX;
		for(int i=0;i<s.size();i++){
		    if(s[i]==word1){
		        start=i;
		    }
		    if(s[i]==word2)
		        end=i;
		    if(start < INT_MAX || end< INT_MAX)
		    mini=min(mini,abs(start-end));
		}
		return mini;
	}
};
