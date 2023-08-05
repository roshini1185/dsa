#include <bits/stdc++.h>

using namespace std;
void minPalindrome(string s){
    int n=s.length(),res=0;
    int start=0,end=n-1;
    while(start<end){
        if(s[start]==s[end])
        {
            start++;
            end--;
        }
        else
        {
            res++;
            //since a character is added at front 
            start=0;
            end=n-res-1;
        }
        cout<<"start: "<<start<<" end: "<<end<<endl;
        cout<<"s[start]: "<<s[start]<<" s[end]: "<<s[end]<<endl;
    }
    cout<<"res: "<<res;
  
    
    
    
    
}
int main()
{
    string s="aacecadaa";
    minPalindrome(s);
}
