//Link:- https://practice.geeksforgeeks.org/problems/maximum-index3307/1
//Technique Used:- find Smaller array and greater array then find the answer

class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int smaller[n];
        int greater[n];
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
            smaller[i]=mini;
        }
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,arr[i]);
            greater[i]=maxi;
        }
        
        int i=0;
        int j=0;
        maxi=INT_MIN;
        while(i<n && j<n){
            if(smaller[i]<=greater[j]){
                maxi=max(maxi,j-i);
                j++;
            }
            else 
            i++;
        }
        return maxi;
    }

};
