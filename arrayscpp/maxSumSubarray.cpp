#include <iostream>

using namespace std;
//kadane's algorithm
void maxSumSubarray(int arr[],int n){
    int result=0,beforeSum;
    beforeSum=arr[0];
    for(int i=1;i<n;i++){
        beforeSum=max(beforeSum+arr[i],arr[i]);
        result=beforeSum;
    }
    cout<<"Max sum of a subarray of the given array is: "<<result<<endl;
}

int main()
{
   int  arr[7]={1,2,-3,4,5,6};
    maxSumSubarray(arr,6);

    return 0;
}
