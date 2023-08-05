#include <bits/stdc++.h>

using namespace std;
void anagrams(vector<string> g ){
    map<string,vector<string>> mp;
    for(int i=0;i<g.size();i++){
        string temp;
        temp=g[i];
       sort(temp.begin(),temp.end());
       mp[temp].push_back(g[i]);
    }
    int num=1;
    for( auto element: mp){
        int n=(element.second).size();
        cout<<"group "<<num<<" : ( ";
        for(int i=0;i<n;i++){
            cout<<element.second[i]<<" ";
        }
        cout<<") are anagrams"<<endl;
        num++;
    }
}
int main()
{
   vector<string> g={"no","on","is"};
   anagrams(g);
    return 0;
}
