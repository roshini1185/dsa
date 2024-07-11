#include <bits/stdc++.h>

using namespace std;
void print(vector<int> v){
    for(auto ele: v)
    cout<<ele<<" ";
    cout<<endl;
}
void printS(stack<int> st){
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
void solve(stack<int> &st,vector<int> &ans,int ele,int &small){
    int next;
    if(st.empty()){
        return ;
    }
   next=st.top();
   st.pop();
   if(small>next)
   small=next;
   cout<<"small: "<<small<<endl;
   solve(st,ans,ele,small);
   st.push(next);
   return;
}
void nextSmallerElement(stack<int> &st, vector<int> &ans){
   
    if(st.empty()) return ;
    int ele=st.top();
    st.pop();
    int small=ele;
    
    solve(st,ans,ele,small);
    printS(st);
    if(small==ele)
    ans.push_back(-1);
    else
    ans.push_back(small);
    
    nextSmallerElement(st,ans);
   return;
    
}
    

int main()
{
    stack<int> st;
     vector<int> ans;
    st.push(34);
    st.push(47);
    st.push(65);
    st.push(38);
    st.push(82);
    st.push(95);
    st.push(14);
    st.push(21);
    printS(st);
  nextSmallerElement(st,ans);
    print(ans);

    return 0;
}
