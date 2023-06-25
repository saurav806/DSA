//question link:- https://practice.geeksforgeeks.org/problems/reverse-a-string/1

string reverseWord(string str){
    
  //Your code here
  int end=str.size()-1;
  for(int start=0;start<end;start++){
      char temp=str[start];
      str[start]=str[end];
      str[end]=temp;
      end--;
  }
  return str;
}
