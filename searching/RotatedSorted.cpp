#include <iostream>

using namespace std;

int search(int arr[],int low, int high,int key,int n)
    {
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==key)
            return mid;
            else if(arr[low]<=arr[mid]) 
            {
                if(key>=arr[low] && key<=arr[mid])    //x is present in sorted half
                {
                    high=mid-1;         //left half sorted
                }
                else                                 // x not present in sorted half
                {
                    low=mid+1;
                }
                
            }
            else 
            {
                if(key<=arr[high] && key>=arr[mid])  //x is present in sorted half
                {
                   low=mid+1;               //right half sorted
                }
                else                                // x not present in sorted half
                {
                    high=mid-1;
                }
            }
        }
         return -1;
    }

int main()
{
   int  arr[6]={10,20,40,60,5,8};
   
  int index=search(arr,0,5,8,6);
  cout<<"index: "<<index<<endl;
  
   

    return 0;
}
