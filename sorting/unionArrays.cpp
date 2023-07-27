
#include <iostream>

using namespace std;

void unionArrays(int first[],int second[],int n,int m){
    int i=0,j=0;
    
    while(i<n && j<m){
        if(first[i]<second[j])
        {
            cout<<first[i]<<" ";
            i++;
        }
        else if(first[i]>second[j])
        {
            cout<<second[j]<<" ";
            j++;
        }
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
            i++;
            j++;
        }
    }
    while(i<n){
        cout<<first[i]<<" ";
    }
    while(j<m){
        cout<<second[j]<<" ";
    }
   
}
int main()
{
    int first[6]={20,20,20,20,20};
    int second[5]={20,20,20,20,20};
    int n=5,m=5;
    unionArrays(first,second,n,m);
    
   
    
    return 0;
}