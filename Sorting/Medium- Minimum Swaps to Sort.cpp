//Link:- https://practice.geeksforgeeks.org/problems/minimum-swaps/1

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int count=0;
	    vector<pair<int,int>>temp;
	    for(int i=0;i<nums.size();i++){
	        temp.push_back({nums[i],i});
	    }
	    sort(temp.begin(),temp.end());
	    for(int i=0;i<nums.size();i++){
	        if(temp[i].second!=i){
	            swap(temp[i],temp[temp[i].second]);
	            count++;
	            i--;
	        }
	    }
	    return count;
	}
};
