#include <bits/stdc++.h>
//0100101 -s.length()==7
//last four flips --- 0101010 ---flips=4
//frst three flips --- 1010101 ---s.length()-flip=7-4=3

using namespace std;
int minFlipString (string S)
{
    int flip=0,n=S.length();
    
    for(int i=0;i<n;i++){
        if(i%2==0)
        {
            if(S[i]=='1') flip++;
            else continue;
        }
        else
        {
            if(S[i]=='0') flip++;
            else continue;
        }
        
    }
    
    return (min(flip,n-flip));
}
int main()
{
    string s="XC";
 minFlipString(s);
    return 0;
}
