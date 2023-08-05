
#include <bits/stdc++.h>

using namespace std;
void printMap(map<char,int> mp){
    for(auto ele: mp){
        cout<<ele.first;
        cout<<" -> "<<ele.second<<endl;
    }
    cout<<endl;
}
void smallWindow(string s,string t){
    set<char> st;
    map<char,int> mp;
    int count=0,distinct,startIndex=0,windowStart=0;
    int windowSize,minSize=INT_MAX;
    for(int i=0;i<t.length();i++){
        st.insert(t[i]);
    }
    distinct=st.size();
    
    int flag=0;
   for(int i=0;i<s.length();i++){
      if(st.find(s[i])!=st.end()){
          if(flag==0)
         { 
            startIndex=i;
            flag=1;
         }
          mp[s[i]]++;
          if(mp[s[i]]==1)
            count++;
      }
        if(count==distinct){
            printMap(mp);
            while(mp[s[startIndex]]!=1)
            {
                mp[s[startIndex]]--;
                startIndex++;
            }
            windowSize=i-startIndex+1;
            if(windowSize<minSize){
                minSize=windowSize;
                windowStart=startIndex;
            }
            startIndex=i+1;
            mp.clear();
            count=0;
        }
      
   }
      cout<< s.substr(windowStart,minSize);
   
}
int main()
{
   string s = "timetopractice",t="toc";
   smallWindow(s,t);
    return 0;
}