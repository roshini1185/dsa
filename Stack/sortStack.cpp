#include <bits/stdc++.h>

using namespace std;
void print(stack<int> s){
    while(!s.empty())
    {
    cout<<s.top()<<" ";
    s.pop();
    }cout<<endl;
}
void sortInsert(stack<int> &s,int ele){
    int element;
    //base case
    if(s.empty() || (!s.empty() && s.top()<=ele)){
        s.push(ele);
        return ;
    }
    // if element present inside stack greater than the element to be inserted
    if(s.top()>ele)
    {
        element=s.top();
        s.pop();
        sortInsert(s,ele);
        s.push(element);
        return ;
    }
    return;
}
void sortStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    int ele;
    int comp;
    ele=s.top();
    s.pop();
    sortStack(s);
    sortInsert(s,ele);

}
int main()
{
    stack<int> s;
    
    s.push(25);
    s.push(9);
    s.push(15);
    s.push(91);
    s.push(5);
    s.push(27);
    s.push(65);
    s.push(76);
    
    cout<<"Stack before sorting: "<<endl;
    print(s);
    sortStack(s);
     cout<<"Stack after sorting: "<<endl;
    print(s);
    

    return 0;
}
