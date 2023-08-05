#include <bits/stdc++.h>

using namespace std;
void printVector(vector<string> &ans){
    for(auto ele:ans){
        cout<<ele<<" ";
    }cout<<endl;
}
void solve(string s,int index,vector<string> &ans){
    if(index>=s.length()){
        ans.push_back(s);
        return;
    }
    for(int i=index;i<s.length();i++){
        cout<<endl;
        cout<<"index: "<<index<<endl;
        cout<<"i: "<<i<<" ";
        
        swap(s[index],s[i]);
        solve(s,index+1,ans);
    }
}
void permutation(string &s){
    int index=0;
    vector<string> ans;
    solve(s,index,ans);
    printVector(ans);
}
int main()
{
    string s="abcd";
    cout<<"Permutations of "<<s<<" are: "<<endl;
    permutation(s);

    return 0;
}
