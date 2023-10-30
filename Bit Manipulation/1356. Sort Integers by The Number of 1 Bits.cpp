class Solution {
public:

    static int findLength(int n){
        int count = 0;
        while(n != 0){
            count++;
            n &= (n-1);
        }
        return count;
    }

    static bool comp(int a, int b){
        if(findLength(a) == findLength(b))
            return a<b;
        return findLength(a) < findLength(b);
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;    
    }
};
