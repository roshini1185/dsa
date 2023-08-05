#include <bits/stdc++.h>

//Check if string b is rotation of string a
using namespace std;
bool areRotations(string a,string b){
    if(a.length()!=b.length())
    return false;
 string concat=a+a;
 if (concat.find(b)!=string::npos)
    return true;
    return false;
}
int main()
{
    string a="andaman";
    string b="amanrnd";
  bool ans= areRotations(a,b);
  if(ans)
  cout<<b<<" is rotation of "<<a<<endl;
  else
  cout<<b<<" is not a rotation of "<<a<<endl;
  

    return 0;
}