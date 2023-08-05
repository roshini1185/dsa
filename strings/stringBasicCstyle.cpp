#include <bits/stdc++.h>

using namespace std;
int main()
{char s[]="geeks";
  //prints 6 because of null char at end.
    cout<<sizeof(s);
  char a[]={'r','o','s','h'};
    //can print anything bcoz it cant find null char
    // so always put a null char while initialising char array in the above manner
    cout<<"\n a: "<<sizeof(a);
    char s1[]="rashini";
    char s2[]="rosh";
    cout<<"length of string s1: "<<strlen(s1)<<endl;
    // if str appears later in dictionaryy---greater than the other.
    //roshini is lexico... greater than er;
    //if greater return 1.
    //if same---returns 0.
    cout<<s1<<" is lexicographically ";
    if(strcmp(s1,s2))
    cout<<"greater than "<<s2<<endl;
    // to copy the later into the former string.
    // we cannot assign a value to string  after its declared in c...so we use strcpy to assign later
    char ex[9];
    strcpy(ex,"roooshini");
  cout<<"ex: "<<ex<<endl;
    return 0;
}
//In Cpp all the operations like +,=,>,< etc are possible.