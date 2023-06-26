//LINK:- https://practice.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int>ans;
        int top=0,left=0,right=C-1,bottom=R-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++)
                ans.push_back(a[top][i]);
            top++;
            
            for(int i=top;i<=bottom;i++)
                ans.push_back(a[i][right]);
            right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                    ans.push_back(a[bottom][i]);
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    ans.push_back(a[i][left]);
                left++;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
