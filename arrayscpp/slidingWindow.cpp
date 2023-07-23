#include <iostream>

using namespace std;

void  slidingWindow(int arr[],int n,int k){
    int sum_prev=0,sum_pres,max_sum;
   for(int i=0;i<n;i++){
       if(i<k)
      { sum_prev+=arr[i];
       max_sum=sum_prev;}
       else
       {sum_pres=sum_prev+arr[i]-arr[i-k];
      // cout<<"Sum_prev: "<<sum_prev<<" Sum_pres: "<<sum_pres<<endl;
       max_sum=max(sum_prev,sum_pres);
      // cout<<"max_sum: "<<max_sum<<endl;
       sum_prev=sum_pres;}
       
   }
   cout<<"Max sum of subarray found using sliding window technique is: "<<max_sum<<endl;
}
    


int main()
{
    int arr[11]={1,8,30,-5,20,100};
   slidingWindow(arr,6,4);

    return 0;
}
