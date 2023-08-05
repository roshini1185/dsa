#include <bits/stdc++.h>


using namespace std;
bool validShuffle(string &a,string &b,string res){
    if(a.length()+b.length()!=res.length())
    return false;
 int i=0,j=0,k=0;
 int al=a.length(),bl=b.length(),resl=res.length();
 while(k<resl)
 {
    if(res[k]==a[i] && i<al)
  {
    k++;
    i++;
  }
    else if(res[k]==b[j] && j<bl)
    {
        j++;
        k++;
    }
    else
    return false;
 }
 return true;
}
int main()
{
    string a="xy";
    string b="12";
    string res="x1y2";
  bool ans= validShuffle(a,b,res);
  if(ans)
  cout<<res<<" is a valid shuffle of "<<a<<" and "<<b<<endl;
  else
   cout<<res<<" is not a valid shuffle of "<<a<<" and "<<b<<endl;
  
    return 0;
}