
#include <bits/stdc++.h>

using namespace std;
void stringModification(string s){
    int n=s.length(),max_Freq=INT_MIN;
  map<char,int> mp;
  for(int i=0;i<n;i++){
      mp[s[i]]++;
  }
  for(auto freq: mp){
      if(freq.second >max_Freq)
      max_Freq=freq.second;
  }
 
  if((max_Freq)<=(n-max_Freq)+1)
  cout<<"Possible";
  else
  cout<<"Not possible";
  
    
    
    
    
}
int main()
{
    string s="c";
    stringModification(s);
}
