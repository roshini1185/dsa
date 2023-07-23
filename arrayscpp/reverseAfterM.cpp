#include <iostream>
using namespace std;
void printArray(int arr[],int n){
 for(int i=0;i<n;i++){

cout<< arr[i]<<" ";

 }cout<< endl;


void reverseAfterM(int arr[],int n,int m){
    int i=m+1,j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    arr[7]={1,2,3,4,5,6,7}
    reverseAfterM(arr,7,3);
    printArray(arr,n);
}