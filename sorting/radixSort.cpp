#include <iostream>

using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void countingSort(int arr[],int n,int ex){
    int count[10],sortarr[n];
    for(int i=0;i<10;i++) count[i]=0;
    for(int i=0;i<n;i++) 
    {
        int temp=(arr[i]/ex)%10;
        count[temp]++;
    }
    for(int i=1;i<10;i++) count[i]=count[i-1]+count[i];
    for(int i=n-1;i>=0;i--){
         int temp=(arr[i]/ex)%10;
         sortarr[count[temp]-1]=arr[i];
         count[temp]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=sortarr[i];
        
    }
   // printArray(arr,n);
}
void radixSort(int arr[],int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    for(int ex=1;maxi/ex>0;ex*=10){
        countingSort(arr,n,ex);
    }
}
int main()
{
   int arr[7]={123,321,432,27,12,32,1};
   int n=7;
   radixSort(arr,n);
    printArray(arr,n);
    return 0;
}
