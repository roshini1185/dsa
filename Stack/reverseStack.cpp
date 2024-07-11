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
void reverseStack(stack<int> &s){
    if(s.empty())
    return;
    //take the top element
    int ele=s.top();
    s.pop();
    // reverse the remaining stack
    reverseStack(s);
    // insert the element at bottom
    insertAtBottom(s,ele);
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
    
    cout<<"Before reversing the stack"<<endl;
    print(s);
    reverseStack(s);
    cout<<"After reversing the stack"<<endl;
    print(s);
    

    return 0;
}
