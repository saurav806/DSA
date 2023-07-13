#include<bits/stdc++.h>
using namespace std;

struct cmp{
  bool operator()(pair<int,int>a, pair<int,int>b){
      if(a.second==b.second)
            return a.first<b.first;
      return a.second<b.second;
  }  
};

int main() {
    vector<pair<int,int>>a;
    a.push_back(make_pair(1,5));
    a.push_back(make_pair(3,1));
    a.push_back(make_pair(2,6));
    a.push_back(make_pair(8,9));
    a.push_back(make_pair(2,9));
    cmp c;
    sort(a.begin(),a.end(),c);
    for(auto i:a)
        cout<<i.first<<" "<<i.second<<endl;
}
