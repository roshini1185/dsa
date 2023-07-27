#include <bits/stdc++.h>

using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void minDiff(int arr[],int n){
    int minimum=92387938;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        minimum=min(minimum,arr[i+1]-arr[i]);
    }
    cout<<"Minimum Difference: "<<minimum<<endl;
}
int main()
{
    int arr[10]={1,8,12,5,18};
    minDiff(arr,5);
    return 0;
}