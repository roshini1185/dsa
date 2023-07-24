#include <iostream>

using namespace std;

int countOccurences(int arr[],int low,int high,int n)
{
    int mid=(low+high)/2;
    if(low>high) return -1;
    else{
        if(arr[mid]==0)
        countOccurences(arr,mid+1,high,n);
        else if(arr[mid]==1) {
        
        if(arr[mid-1]==1)  countOccurences(arr,low,mid-1,n);
            
        else
        {  
          if(mid==0)
         return mid;
        }
    }
        }
    }
    

int main()
{
   int  arr[5]={1,1,1,1,1};
    int n=5; 
   int count=countOccurences(arr,0,n-1,n);
  
   cout<<"No. of 1's : "<<(n-count)<<endl;
   

    return 0;
}
