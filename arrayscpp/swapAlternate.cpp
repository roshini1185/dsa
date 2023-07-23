#include <iostream>

using namespace std;

void printArray(int arr[],int n){
 for(int i=0;i<n;i++){

cout<< arr[i]<<" ";

 }cout<< endl;



}
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
    if (i+1< n){
        swap(arr[i],arr[i+1]);
    }
    }
}
int main(){
 int even[6]={24,27,29,43,47,77};
 int odd[5]={12,42,53,64,76};

swapAlternate(even,6);
swapAlternate(odd,5);
 printArray(even,6);
 printArray(odd,5);




}