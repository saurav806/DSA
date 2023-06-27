//Link:- https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	
	    int max=0;
	    int index=-1;
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=m-1;j>=0;j--){
	            if(arr[i][j]!=1)
	                break;
	            count++;
	        }
	        if(count>max){
	            max=count;
	            index=i;
	        }
	       
	    }
	    return index;
	}

};
