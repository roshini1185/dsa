#include <bits/stdc++.h>

using namespace std;
void minAdjacentSwaps(string s){
    int open=0,close=0,swap=0,unbalanced=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==']')
        {
            close++;
            unbalanced=close-open;
        }
        else
        {
            if(unbalanced>0)
            {
                open++;
                swap+=unbalanced;
                unbalanced--;
            }
            else
            open++;
        }
    }
    cout<<"Minimum number of adjacent swaps required are: "<<swap<<endl;
}
int main()
{
    string s="[]]]][[][[";
    minAdjacentSwaps(s);

    return 0;
}
