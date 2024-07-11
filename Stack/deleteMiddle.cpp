#include <bits/stdc++.h>

using namespace std;
void print(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void solve(stack<int> &s,int count,int size){
    int ele;
    if(count==size/2){
        s.pop();
        return;
    }
    ele=s.top();
    
    s.pop();
    
    solve(s,count+1,size);
   
    s.push(ele);
    
    return ;
    
}

void deleteMiddle(stack<int> &s,int size){
    int count=0;
    solve(s,count,size);
    print(s);
}

int main()
{
    
    stack<int> s;
    
    s.push(56);
    s.push(98);
    s.push(76);
    s.push(21);
    s.push(12);
    
    int size=s.size();
    deleteMiddle(s,size);
    

    return 0;
}
