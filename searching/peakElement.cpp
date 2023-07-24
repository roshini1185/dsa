#include <iostream>

using namespace std;

int peak(int arr[],int low, int high,int n)
    {
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            
            if((mid==0||arr[mid]>=arr[mid-1])&& (mid==n-1||arr[mid]>=arr[mid+1]))
            return arr[mid];
            else if(arr[mid]<arr[mid+1] && mid<n-1)
            low=mid+1;
            else 
            high=mid-1;
            
        }
        if(low>high)
        return -1;
            
       
    }

int main()
{
   int  arr[7]={10,20,15,5,23,90,60};
   
  int element=peak(arr,0,6,7);
  
  cout<<"Peak element: "<<element<<endl;
   

    return 0;
}