//Link:- https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1


//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	   set<char>s;
	   string ans="";
	   for(int i=0;i<S.size();i++){
	       
	       if(s.find(S[i])==s.end())
	        ans+=S[i];
	        s.insert(S[i]);
	   }
	   
	   return ans;
	}
};
