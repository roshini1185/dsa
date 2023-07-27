#include <iostream>

using namespace std;
//best Case: O(nlogn)
//worst case: o(nlogn)
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int start,int end)
{
    int length1,length2,mid;
    mid=start+(end-start)/2;
    length1=mid-start+1;
    length2=end-mid;
        int mainArrayIndex=start;
        int secondArrayIndex=mid+1;
    //Create Dynamic arrays
    int *first=new int[length1];
    int *second=new int [length2];
    //Copying the values into auxiliary array
    
    for(int i=0;i<length1;i++){
        first[i]=arr[mainArrayIndex];
        mainArrayIndex++;
    }
   
    for(int i=0;i<length2;i++){
        second[i]=arr[secondArrayIndex];
        secondArrayIndex++;
    }
    //Merge two arrays
    int index1=0,index2=0;
    mainArrayIndex=start;
    while(index1<length1 && index2<length2){
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex]=first[index1];
            mainArrayIndex++;
            index1++;
        }
        else if (first[index1]>second[index2])
        {
            arr[mainArrayIndex]=second[index2];
            mainArrayIndex++;
            index2++;
        }
        else
        {
            arr[mainArrayIndex]=second[index2];
            mainArrayIndex++;
             arr[mainArrayIndex]=second[index2];
            mainArrayIndex++;
            index1++;
            index2++;
        }
    }
    while(index1<length1)
    {
        arr[mainArrayIndex]=first[index1];
        mainArrayIndex++;
        index1++;
    }
    while(index2<length2)
    {
        arr[mainArrayIndex]=second[index2];
        mainArrayIndex++;
        index2++;
    }
    
}
void mergeSort(int arr[],int start,int end)
{
   
    if(start>=end)
    return;
    int mid=start+(end-start)/2;
     mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main()
{
    int arr[7]={-12,78,21,123,213,24,24};
    int n=7;
    mergeSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}