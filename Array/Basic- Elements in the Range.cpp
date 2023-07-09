//Link:- https://practice.geeksforgeeks.org/problems/elements-in-the-range2834/1

class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		if(n < B-A) return false;
	    for(int i=0;i<n;i++){
	        if(abs(arr[i]) >= A && abs(arr[i]) <= B){
	            int idx= abs(arr[i])-A;
	            if(arr[idx]>0)
	            arr[idx]*= -1;
	        }
	    }
	    
	    for(int i=0;i<=(B-A);i++){
	        if(arr[i]>0)
	            return false;
	    }
	    return true;
	}


		 

};
