#include <iostream>
//best case:  O(n)
//worst Case: O(n^2)

using namespace std;
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
         }
         cout<<endl;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
           { swap(arr[j],arr[j+1]);
            swapped=true;}
        }
        if(swapped==false)
        break;
    }
}
int main()
{
    /*
    Declared Array
   int arr[5]={12,43,25,31,17};
   */
   
   //
   User Input
   
   int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   bubbleSort(arr,n);
   printArray(arr,n);

    return 0;
}