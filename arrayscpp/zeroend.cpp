#include <iostream>

using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<< arr[i]<<" ";
  }
  cout<<endl;
} 


void zeroEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) {
            if(count) swap(arr[count],arr[i]); 
        count++;
        }
    
    }
   

}
int main(){
    
    int arr[7]={10,20,0,30,60,0,0};
    int brr[5]={-2,1,13,12,15};
    zeroEnd(arr,7); 
    printArray(arr,7);
  
  
}