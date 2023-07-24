#include <iostream>

using namespace std;

int binarySearch(int arr[],int low,int high,int key)
    {
       
        int mid;
    while(low<=high)
   {
        //cout<<" low: "<<low<<endl;
       mid=(low+high)/2;
       if(arr[mid]==key)
       return mid;
       else if(arr[mid]<key)
       low=mid+1;
       else
       high=mid-1;
   }
    return -1;
    }
int searchingInfinite(int arr[],int key){
    int i=1;
   int index;
   if(arr[i]==key) return 0;
  while(arr[i]!=key){
      // cout<<"i: "<<i<<" arr[i]: "<<arr[i]<<endl;
     
      if(arr[i]==key)
      {
          
       return i;
      }
      else if(arr[i]>key)
      {
        index=binarySearch(arr,(i/2)+1,i-1,key);
        return index;
      }
      else
      i=i*2;
      
  }
}
    

int main()
{
   int  arr[100]={48,53,55,65,67,69,72,78,84,91,94,99,101,123,157,169,187};
   int key=77;
   int index=searchingInfinite(arr,key);
   if(index!=-1)
   cout<<"index of "<<key<<" is: "<<index<<endl;
   else
   cout<<key<<" not found.";
   
  
  
   

    return 0;
}