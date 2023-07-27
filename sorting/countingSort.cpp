#include <iostream>
//Used for numbers in small range
//Does no comparisions
//Needs xtra space--nOt iNplace algorithm.
//takes o(n+k) time
//K is linear.
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void countingSort(int arr[],int n,int k){
    //k-->5 then numbers from range 0 to 4 are present in array
    int count[k];
    int sorted[n];
    for(int i=0;i<k;i++) count[i]=0;
    //Store the frequency of each element in the array
    for(int i =0;i<n;i++) count[arr[i]]++;
   
    // finding count of no. of elements smaller than present element
    for(int i=1;i<k;i++){
        count[i]=count[i-1]+count[i];
    }
  //  last element of array is taken
  //check the count of elements smaller than this element 
  //determine the index of element in final array with help of count array-1.
  //if 6 elements are less than present element it means the element is present at 6th position
  //that is ,index=6-1=5;
  //decrease the frequency of element in count array as one element is already stored in Sorted array.
    for(int i=n-1;i>=0;i--){
      
       sorted[count[arr[i]]-1]=arr[i];
       count[arr[i]]--;
    }
    printArray(sorted,n);
    
}
int main()
{           
    int arr[6]={1,1,0,4,2,4};
    
    countingSort(arr,6,5);
    
    
    
    return 0;
}
