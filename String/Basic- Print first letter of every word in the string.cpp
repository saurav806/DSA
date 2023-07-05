//Link:- https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1

//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    char ch=S[0];
	    string ans="";
	    ans+=ch;
	    for(int i=1;i<S.size();i++){
	        if(S[i]==' '){
	            ans+=S[i+1];
	            i++;
	        }
	    }
	    return ans;
	}
};
