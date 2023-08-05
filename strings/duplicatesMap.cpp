#include <bits/stdc++.h>

//Time Complexity: O(NLOGN)--(N) length (Logn) -insertion into map
//Space Complexity: O (k) k-repeating elements count of string;
using namespace std;
void duplicatesMap(string s){
   map<char,int> mp;
   for(int i=0;i<s.length();i++){
       mp[s[i]]++;
   }
   for(auto ele: mp){
       if(ele.second>1)
       cout<<"Character: "<<ele.first<<" appears "<<ele.second<<" times"<<endl;
   }
}
int main()
{
    string s="andaman and nicobar islands";
    duplicatesMap(s);
    
    
    

    return 0;
}