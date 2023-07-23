#include <bits/stdc++.h> 
void printArray(int arr[],int n){
    for(int i=0;i<4;i++){
      cout<< arr[i]<<" ";
  }
  cout<<endl;
}


void sort012(int *arr, int n)
{
   int low=0;
  int  mid=0;
  int  high=n-1;
   while(mid<=high){
    
    switch(arr[mid]){
       
       case 0:
       swap(arr[low++],arr[mid++]);
       break;

       case 1:
       mid++;
       break;

       case 2:
       swap(arr[high--],arr[mid]);
       break;

    }

   }
   
   }

int main(){
int arr[7]={2,1,2,0,1,0};

sort012(arr);
printArray(arr,7);
return 0;

}