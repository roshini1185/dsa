#include <iostream>
 using namespace std;

int getMax(int arr[],int size){
    int maxi=INT16_MIN;
   
   for(int i=0;i<size;i++){
  //if (arr[i]>max) max=arr[i];
     maxi=max(maxi,arr[i]);
   }
    return maxi;
}

int getMin(int arr[],int size){
    int mini=INT16_MAX;
     for(int i=0;i<size;i++){
    //     if (arr[i]<min) min=arr[i];
    mini=min(arr[i],mini);
    }
    return mini;
}

 int main(){
    /*
int number[15]={0};
//to find the size

 int numberSize=sizeof(number)/sizeof(int);
cout<<"array size is : "<< numberSize <<endl;
*/
//declaring a character array
/*
char ch[5]={'r','o','s','h','i'};
 
 //finding max min element
 int arr[5]={74,52,47,77,27};
 
 int max=getMax(arr,5);
 cout <<"Max element of array: "<< max<< endl;


int min=getMin(arr,5);
cout <<"Min element of array: "<< min<< endl;

*/
/*

void reverseArray(int arr[],int n){
   int start=0;
   int end=n-1;
   while(start<=end){
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
}

void printArray(int arr[],int n){
    for(int i=0;i<4;i++){
      cout<< arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    // reversing an array
    
  int arr[6]={1,4,0,5,-1,15};
  int brr[5]={2,6,3,9,4};
  
  reverseArray(arr,6);
  reverseArray(brr,5);
  cout<<"Reversed array: "<<endl;
  printArray(arr,6);
  printArray(brr,5);


 return 0;}