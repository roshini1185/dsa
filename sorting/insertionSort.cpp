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

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        //elements bfore temp cannot be greater than temp 
        //if they are greater shift them to right by  one.
        while(j>=0 && temp<arr[j])
       {
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=temp;
    // j goes to prev index and check if the element is less than temp then it does nothing 
    //j stays there and breaks out of the while loop
    //so j+1 is where the element has to be inserted as j has smaller element than temp.
     
    }
    
}
int main(){
    int arr[5]={2,43,23,27,5};
    int n=5;
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}