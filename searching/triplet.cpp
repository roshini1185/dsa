#include <bits/stdc++.h> 
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<< arr[i]<<" ";
  }
  cout<<endl;
}

bool tripletsum(int arr[],int n)
{
sort(arr,arr+n);
for(int i=0;i<n-2;i++){
int low=i+1;
int high=n-1;
while(low<high){
    int req_sum=12,actual_sum=arr[i]+arr[low]+arr[high];
    if(actual_sum > req_sum) high--;
    else if (actual_sum<req_sum) low++;
    else return true;
}

}
return false;
}


int main(){

int arr[6]={-3,-6,0,1,7,4};

bool possibility=tripletsum(arr,6);
if(possibility)
cout<<"possibility: Yes";
else
cout<<"possibility: No";

printArray(arr,6);
return 0;



}