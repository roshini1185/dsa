//sort negative to one end and positive to other end
#include <bits/stdc++.h>

using namespace std;
void printarray(int chocolate[],int n){
    for(int i=0;i<n;i++){
        cout<<chocolate[i]<<" ";
    }cout<<endl;
}

void sortPosNeg(int arr[],int n){
   
  int pivot =0 ,i=-1,count =1;
  for(int j=0;j<n;j++){
      if(arr[j]<pivot )
      {
          i++;
          swap(arr[i],arr[j]);
           
        
      }
       cout<<"count: "<<count++<<endl;
          
  }
   
}
int main()
{
    int arr[9]={-8,12,-5,18,-17,-19,-6,4};
    int n=8;
    sortPosNeg(arr,n);
   printarray(arr,n);
    return 0;
}
