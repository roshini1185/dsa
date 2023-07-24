#include <iostream>

using namespace std;

//First Occurence of the given element
int firstOccurence(int arr[],int low,int high,int key){
    int mid=(high+low)/2;
    if(low>high)
    return -1;
    else {
        if(arr[mid]>key)  firstOccurence(arr,low,mid-1,key);
        else if(arr[mid]<key) firstOccurence(arr,mid+1,high,key);
        else {
            if(arr[mid-1]!=arr[mid]|| mid==0) return mid;
            else firstOccurence(arr,low,mid-1,key);
        }
        
    }
}
//Last Occurence of the given element
int lastOccurence(int arr[],int low,int high,int key,int n){
    int mid=(high+low)/2;
    if(low>high)
    return -1;
    else {
        if(arr[mid]>key)  lastOccurence(arr,low,mid-1,key,n);
        else if(arr[mid]<key) lastOccurence(arr,mid+1,high,key,n);
        else {
            if(arr[mid+1]!=arr[mid]|| mid==n-1) return mid;
            else lastOccurence(arr,mid+1,high,key,n);
        }
        
    }
}

//Count of occurences of the given element.
int countOccurence(int arr[],int low,int high,int key,int n){
   int firstIndex= firstOccurence(arr,low,high,key);
   int lastIndex=lastOccurence(arr,low,high,key,n);
   if(firstIndex==-1) return 0;
   else return(lastIndex-firstIndex+1);
}

int main()
{
   int  arr[5]={5,5,5,5,5};
    int n=5,key=5;
    int firstIndex=firstOccurence(arr,0,n-1,key);
    cout<<"First Occurence of "<<key<<" : "<<firstIndex<<endl;
    int lastIndex=lastOccurence(arr,0,n-1,key,n);
    cout<<"last Occurence of "<<key<<" : "<<lastIndex<<endl;
    int count=countOccurence(arr,0,n-1,key,n);
     cout<<"Count of occurences of "<<key<<" : "<<count<<endl;

    return 0;
}