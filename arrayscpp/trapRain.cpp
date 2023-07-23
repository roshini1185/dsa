#include <iostream>

using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<< arr[i]<<" ";
  }
  cout<<endl;
}

void trapRain(int arr[],int n){
   int lmax[n],rmax[n],trapCount=0;
   for(int i=1;i<n;i++){
       lmax[0]=arr[0];
       lmax[i]=max(arr[i],lmax[i-1]);
   }
    for(int i=n-2;i>=0;i--){
       rmax[n-1]=arr[n-1];
       rmax[i]=max(arr[i],rmax[i+1]);
   }
   for(int i=0;i<n;i++){
       trapCount+=(min(lmax[i],rmax[i])-arr[i]);
   }
   cout<<"lmax: "<<endl;
   printArray(lmax,7);
   cout<<"rmax: "<<endl;
   printArray(rmax,7);
   
  
    cout<<"Amount of rain trapped is: "<<trapCount<<" ";
}

int main()
{
   int  arr[20]={5,0,6,2,3};
    trapRain(arr,5);

    return 0;
}