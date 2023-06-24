//Link :- https://practice.geeksforgeeks.org/problems/implement-strstr/1
//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int k=0;
     int ans;
     for(int i=0;i<s.size();i++){
         while(s[k+i]==x[k]){
            //  ans=i;
             if(x.size()==k+1)
                return i;
            k++;
         }
         k=0;
     }
     return -1;
}

//Author Saurav 
