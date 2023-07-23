#include <iostream>

using namespace std;
void leader(int arr[],int n){
    int j=n-1,count=1 ;
    bool flag=1;
    cout<<" leader "<<count;
    cout<<": "<<arr[n-1]<<endl;
    while(flag && j>=1){
       if(arr[j]<arr[j-1]){
           
           count++;
           cout<<" leader "<<count;
           cout<<": "<<arr[j-1]<<endl;
           j--;
       } 
       else flag=0;
        
        
    }
}


int main()
{
    int arr[10]={15,12,74,47,57,43,32,21};
    
    leader(arr,8);

    return 0;
}
