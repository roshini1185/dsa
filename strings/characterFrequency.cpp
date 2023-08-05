#include <bits/stdc++.h>

using namespace std;
void characterFrequency(string s){
    vector<int> count(26,0);
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
     for(int i=0;i<count.size();i++){
         if(count[i]!=0)
        cout<<"Frequency of "<<(char)(i+'a')<<" is : "<<count[i]<<endl;
    }
}
int main()
{
  string s="geeksforgeeks";
    characterFrequency(s);
    return 0;
}
