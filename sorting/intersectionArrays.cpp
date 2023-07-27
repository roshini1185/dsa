#include <iostream>

using namespace std;

void intersection(int first[],int second[],int n,int m){
    int i=0,j=0;
    while(i<n && j<m){
       cout<<"first[i]: "<<first[i]<<" second[j]: "<<second[j]<<endl;
        if(first[i]<second[j])
        i++;
        else if(first[i]>second[j])
        j++;
        else if(first[i]==second[j] && first[i-1]!=first[i] )
        {
            cout<<first[i]<<" ";
            i++;
            j++;
        }
        else
        {
            if(i==0 || j==0)
            cout<<first[i]<<" ";
            cout<<" else first[i]: "<<first[i]<<" else second[j]: "<<second[j]<<endl;
            i++;
            j++;
          
        }
    }
   
}
int main()
{
    int first[6]={0,6,8};
    int second[5]={-2,0,8,8,15};
    int n=3,m=5;
    cout<<" Intersection: ";
 intersection(first,second,n,m);
    
   
    
    return 0;
}
