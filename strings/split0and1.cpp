#include <bits/stdc++.h>

using namespace std;

void splitSubstr(string s){
    int vote=1,count=0;
    for(int i=0;i<s.length();i++){
        if((s[i]-'0')==1)
            vote++;
        else
            vote--;
       if(vote==1)
       count++;
    }
    if(count)
    cout<<"count: "<<count<<endl;
    else
    cout<<"-1"<<endl;
}
int main()
{
    string s="0111100010";
    splitSubstr(s);

    return 0;
}
