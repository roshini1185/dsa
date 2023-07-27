#include <iostream>
//best case: o(nlogn)
//worst case: o(n^2)
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int partiton(int arr[],int start,int end){
    int pivot=arr[start];
    int count=0;
    //Count elements less than pivot 
    //to find the right position of pivot
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot)
        count++;
    }
    int pivotIndex=start+count;
    //Moving the pivot element to its position
    swap(arr[pivotIndex],arr[start]);
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot)
        i++;
        while(arr[j]>pivot)
        j--;
       
        if(i<pivotIndex && j>pivotIndex)
       { swap(arr[i],arr[j]);
        i++;
        j--;}
    }
    return pivotIndex;
}
void quickSort(int arr[],int start,int end){
  
    if(start>=end)
    return;
 int p=partiton(arr,start,end);
 quickSort(arr,start,p-1);
 quickSort(arr,p+1,end);
    
       
        
        
    }
    

int main()
{
    int arr[10]={3,4,1,7,0,5,2,9,6,8};
   quickSort(arr,0,9);
   printArray(arr,10);
    return 0;
}
