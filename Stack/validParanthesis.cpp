#include <bits/stdc++.h>

using namespace std;
void print(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void validParanthesis(string s){
    stack<char> st;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='[' )
            st.push('[');
        else if(s[i]=='(')
            st.push('(');
        else if(s[i]=='{')
            st.push('{');
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']'))
                st.pop();
            else if(st.empty())
           { 
            cout<<"Not Balanced"<<endl;
            return;
               
           }
            else
            {
                cout<<"Not Balanced "<<endl;
                return;
            }
        }
        
        
    }
    if (st.size()==0)
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
}
int main()
{
    string s="[()]{}{[()()]()}";
    validParanthesis(s);

    return 0;
}
