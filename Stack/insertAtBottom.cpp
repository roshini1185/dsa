#include <bits/stdc++.h>

using namespace std;
void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void insertAtBottom(stack<int> &s,int element){
    int ele;
    if(s.empty()){
        s.push(element);
        return;
    }
    ele=s.top();
    s.pop();
    insertAtBottom(s,element);
    s.push(ele);
    return;
}
int main()
{
    stack<int> s;
    s.push(12);
    s.push(51);
    s.push(34);
    s.push(47);
    s.push(52);
    s.push(96);
    int element=73;
    cout<<"Before inserting "<<element<<" at bottom"<<endl;
    print(s);
    insertAtBottom(s,element);
    cout<<"After inserting "<<element<<" at bottom"<<endl;
    print(s);
    

    return 0;
}
