#include <bits/stdc++.h>

using namespace std;
void printVector(vector<string> ans){
    for(auto ele: ans){
        cout<<ele<<" ";
    }cout<<endl;
}
void solve(string s,string output,vector<string> &ans,int index){
    //base Case
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }
    //Exclude
    cout<<"exclude index:"<<index<<endl;
    cout<<"exclude output: "<<output<<endl;
    solve(s,output,ans,index+1);
    //include
    char ch=s[index];
    output=output+ch;
     cout<<"include index:"<<index<<endl;
     cout<<"include output: "<<output<<endl;
    solve(s,output,ans,index+1);
    return ;
}
void subsequences(string s){
vector<string> ans;
string output="";
int index=0;
    solve(s,output,ans,index);
    printVector(ans);
}
int main()
{
    string s="abc";
    subsequences(s);

    return 0;
}
