/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
using namespace std;
int minReversalCount(string &s){
    stack <char> bct;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{')
        bct.push('{');
        else 
        {
            if(bct.empty())
            {
                count++;
                bct.push('{');
            }
            else
            {
                bct.pop();
            }
        }
    }
    int size= bct.size();
    if(size%2!=0)
    return -1;
    count+=(size/2);
    return count;
}
int main(){
    string s="{{}{{{}{{}}{{{";
    int count=minReversalCount(s);
    if(count==-1)
    cout<<"Not possible";
    else
    cout<<"Minimum number of reversals needed to balance the expression are: "<<count<<endl;
}