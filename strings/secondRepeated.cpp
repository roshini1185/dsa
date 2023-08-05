#include <bits/stdc++.h>

using namespace std;
void secondRepeated(string s[],int n){
  
    map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int frst=-192392738,sec=-276731721;
   for(auto ele:mp){
       if(ele.second>frst)
       {        
           
               sec=frst;
               
               frst=ele.second;
               
           
       }
       else if(ele.second>sec && ele.second<frst)
       sec=ele.second;
       
       
   }
   string str;
   for (auto ele: mp){
       if(ele.second==sec)
        str=ele.first;
   }
    cout<<"Second most repeated string: "<<str<<endl;
}
int main()
{
    string s[]={"aaa","bbb","aaa","ccc","aaa","bbb"};
    secondRepeated(s,6);

    return 0;
}