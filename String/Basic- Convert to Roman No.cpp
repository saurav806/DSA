//Link:- https://practice.geeksforgeeks.org/problems/convert-to-roman-no/1

//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        vector<int>value        = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string>notations = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string roman="";
        
        for(int i=0;n>0;i++){
            while(n>=value[i]){
                roman=roman+notations[i];
                n=n-value[i];
            }
            
        }
        return roman;
    }
};
