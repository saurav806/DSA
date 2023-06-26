//Link:- https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1
//Technique Used:- Matrix rotation

//User function template for C++
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	    for(int i=0;i<n;i++){
	        int start=0,end=n-1;
	        while(start<end){
	            swap(arr[start][i],arr[end][i]);
	            start++;
	            end--;
	        }
	    }
	}

};
