//Link:- https://practice.geeksforgeeks.org/problems/max-min/1

//User function Template for C++

class Solution
{
    private:
    
    int max_min(int a[],int &maxi, int &mini, int low, int high){
        int min1,max1,min2,max2;
        if(low==high)
            maxi=mini=low;
        else{
            int mid=low+ (high-low)/2;
            max_min(a, max1, min1, low, mid);
            max_min(a, max2, min2, mid+1, high);
            
            if(a[max1]>a[max2])
                maxi=max1;
            else
                maxi=max2;
            if(a[min1]>a[min2])
                mini=min2;
            else
                mini=min1;
        }
    }
   public:
    
    int findSum(int A[], int N)
    {
    	//code here.
    	int max;
    	int min;
    	max_min(A,max,min,0,N-1);
    	return (A[max]+A[min]);
    }

};
