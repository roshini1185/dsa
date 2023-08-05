//FInd the smallest window containing all the distinct characers of the string
#include <bits/stdc++.h>

using namespace std;
void smallWindow(string s){
    map<char,int> mp;
    set<int> st;
    int n=s.length(),windowStart=0,start=0,windowSize,miniSize=INT_MAX;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    int distinct=st.size(),count=0;
    st.clear();
    int i;
    //storing freq
    for( i=0;i<n;i++)
    {
        
       // cout<<"s["<<i<<"]: "<<s[i]<<endl;
       
       mp[s[i]]++;
      //  cout<<mp[s[i]]<<endl;
       if(mp[s[i]]==1)
        count++;
       // cout<<"count: "<<count<<endl;
        if(count==distinct)
        { 
            //check if we can shrink the window
            while(mp[s[start]]>1)
            {
            mp[s[start]]--;
            start++;
            }
            
            windowSize=i-start+1;
        if(miniSize>windowSize)
             {
             miniSize=windowSize;
             windowStart=start;
                 
             }
             count=0;
             mp.clear();
             //Updating the start of another window
             start=i+1;
            
        }
       
        
    }
    
        cout<<"Minimum Length of window: "<<miniSize<<endl;
        cout<<"Substring that contains all distinct characters and has minimum length is: "<<s.substr(windowStart,miniSize);
}
int main()
{
    string s="AABBBCBBAC";
    smallWindow(s);

    return 0;
}
