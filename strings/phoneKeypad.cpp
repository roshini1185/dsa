#include <iostream>

using namespace std;
void printKeypadSequence(string s, string seq[]){
    string output="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        output+='0';
        else{
           string temp= seq[s[i]-'a'];
           output+=temp;
        }
    }
    cout<<"Equivalent keypad sequence for "<<s<<" is: "<<output<<endl;
}
int main()
{
  string s="soumya";
    
    string seq[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7",
    "77","777","7777","8","88","888","9","99","999","9999"};
        
    printKeypadSequence(s,seq);
    
    return 0;
}
