#include <bits/stdc++.h>

using namespace std;
void printchocolateay(int chocolate[],int n){
    for(int i=0;i<n;i++){
        cout<<chocolate[i]<<" ";
    }cout<<endl;
}

void chocolateDist(int chocolate[],int n,int students){
    if(students>n)
    cout<<"Not possible";
    else
        {
            int minimum=arr[m-1]-arr[0];
            sort(chocolate,chocolate+n);
            for(int i=1;i+students-1<n;i++) 
               { 
                   minimum=min(minimum,chocolate[i+students-1]-chocolate[i]);
                  // cout<<"minimum: "<<minimum<<endl;
               }
               
       
    cout<<"minimum Difference: "<<minimum<<endl;}
}
int main()
{
    int chocolate[9]={1,8,12,5,18,17,19,6,4};
    int m=3;
    minDiff(chocolate,9,m);
   //1 4 5 6 8 12 17 18 19
    return 0;
}
