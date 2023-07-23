#include <iostream>

using namespace std;

void  minimumFlip(int arr[],int n){
   
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            if(arr[i+1]!=arr[0])
            cout<<"From "<<i+1<<" to ";
            else
            cout<<i<<endl;
        }
       
    }
       if(arr[n-1]!=arr[0])
       cout<<n-1<<endl;
    }
    
    


int main()
{
    int arr[11]={1,0,0,0,1,0,0,0,0};
   minimumFlip(arr,9);

    return 0;
}
