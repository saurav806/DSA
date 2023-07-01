//Link:- https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size()!=str2.size())
            return false;
        if(str1[0]==str2[2]){
            swap(str1,str2);
        }
        int i=2;
        int j=0;
        while(i<str1.size()){
            if(str1[i]!=str2[j])
                return false;
            i++;
            j++;
        }
        i=0;
        while(j<str2.size()){
            if(str1[i]!=str2[j])
                return false;
            i++;
            j++;
        }
        return true;
    }

};
