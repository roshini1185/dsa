#include <iostream>
//best case:  O(n^2)
//worst Case: O(n^2)
using namespace std;
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
         }
         cout<<endl;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        int min_Index=i;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_Index])
            {
                min_Index=j;
             
            }
        }
        swap(arr[i],arr[min_Index]);
       
    }
}
int main()
{
    /*
    Declared Array
   int arr[5]={12,43,25,31,17};
   */
   
   int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    

 selectionSort(arr,n);
   cout<<"Elements after Sorting: ";
   printArray(arr,n);


    return 0;
}