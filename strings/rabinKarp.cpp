#include <iostream>
#include <math.h>
using namespace std;
void rabinkarp(string &txt,string &pattern){
    int m=pattern.length();
    int n=txt.length();
    int q= 2147483648;
    int txtsum=0;
    int patsum=0;
    int d=256;
    //finding hash value of pattern and frst m length txt
    for(int i=0;i<m;i++){
        patsum=((patsum*d)+pattern[i])%q;
        txtsum=((txtsum*d)+txt[i])%q;
    }
    for(int i=0;i<=n-m;i++){
        if(patsum==txtsum)
        {
            int j;
            for( j=0;j<m;j++)
            {
               if( txt[i+j]!=pattern[j])
               break;
            }
            if(j==m)
            cout<<"pattern present at index: "<<i<<endl;
        }
        if(i<n-m){
            txtsum=((d*(txtsum-(txt[i]*pow(d,m-1))))+txt[i+m]);
            txtsum=txtsum%q;
            if(txtsum<0)
            txtsum=txtsum+q;
        }
           
        
        
    }
  
 

}
int main()
{
    string txt="abrcdabrcd";
    string pattern="rcd";
    rabinkarp(txt,pattern);
    return 0;
}
