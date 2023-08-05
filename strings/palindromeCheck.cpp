#include <bits/stdc++.h>

using namespace std;
void palindromeCheck(string s){
    int i=0,j=s.length()-1,flag=1;
    while(i<=j){
        if(s[i]!=s[j])
       {
           cout<<s<<"is not a palindrome"<<endl;
           flag=0;
            break;
           
       }
        else{
            i++;
            j--;
            
        }
    }
    if(flag)
    cout<<s<<" is a Palindrome"<<endl;
}
int main()
{
    string s="madam";
    palindromeCheck(s);
    
    
    

    return 0;
}