//Link:- https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1
//For understanding see doc page of this ques.

//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int length=s.size();
	    int odd=0,even=0;
	    for(int i=0;i<length;i++){
	        if(s[i]=='1'){
	            if(i%2==0)
	                even++;
	            else
	                odd++;
	        }
	    }
	   return (odd-even)%3==0;
	}

};