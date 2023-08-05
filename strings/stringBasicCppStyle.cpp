#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s="geeks";
  //prints exact length
    cout<<"length of string s1: "<<s.length()<<endl;
    //to concatenate
    s=s+"forgeeks";
    cout<<"Concatenated: "<<s<<endl;
    //substr parameters---1.startIndex 2. Length of substr
    cout<<"Sub string from index 3 and of length 6: "<<s.substr(3,6)<<endl;
   //find gives index of frst occurence anf starting index of string.
   cout<<"Finding eksf: "<<s.find("eksf")<<endl;
   cout<<"Finding e: "<<s.find("e")<<endl;
   //If doesnt exist return special constant 
   //string:: npos--to indicate that no such position is found
   cout<<"Finding smth that doesnt exist: "<<s.find("rosh")<<endl;
    //Using operators instead of strcmp
    string s1="roshini",s2="rosh";
    if(s1==s2) cout<<s1<<" is same as "<<s2<<endl;
    else if(s1>s2)  cout<<s1<<" is greater than "<<s2<<endl;
    else cout<<s1<<" is smaller than "<<s2<<endl;
    //cin>> stops reading the input from console when a space is present within the string.
    //for tspace;
    string space;
    /* cout<<"Enter your name: ";
    cin>>space;
    cout<<"Your name with cin is: "<<space<<endl;
    */
    //Using Get Line
    /*string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Your name with getline is: "<<name<<endl;
    */
    // can give an extra parameter to getline -the character at which it should stop reading
    string name;
    cout<<"Enter your name: ";
    getline(cin,name,'s');
    cout<<"Your name with getline and character parameter is: "<<name<<endl;
    //Can access using index
    cout<<"Accesing index: "<<endl;
    for(int i=0;i<name.length();i++){
        cout<<name[i]<<" ";
    }cout<<endl;
     cout<<"Accesing using for each loop: "<<endl;
    //can access using for each loop
    for(auto character: name){
        cout<<character<<" "    ;
        
    }
        cout<<endl;

    return 0;
}
//In Cpp all the operations like +,=,>,< etc are possible.