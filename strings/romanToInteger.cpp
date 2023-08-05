#include <bits/stdc++.h>

using namespace std;
void  romanToInteger(string s)
{
    int sum=0,n=s.length();
    map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0;i<n-1;i++){
        if(mp[s[i]]>=mp[s[i+1]])
        {
            sum=sum+mp[s[i]];
        }
        else
        {
            sum=sum-mp[s[i]];
        }
        
    }
    sum=sum+mp[s[n-1]];
    cout<<"sum: "<<sum<<endl;
}
int main()
{
    string s="XC";
  romanToInteger(s);
    return 0;
}
