/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void consecutive(int arr[],int n){
    int i=0,flag=1,max_count=0,count=0;
    while(i<n){
        if(arr[i]==1)
       { count++;
          max_count=max(count,max_count);}
        else {
        flag=0;
            count=0;
        }
        i++;
    }
  
    cout<<"Max consecutive 1's: "<<max_count<<" ";
}

int main()
{
   int  arr[20]={1,1,0,0,1,0,1,1,1,1,0,1,1,1,1,1};
    consecutive(arr,16);

    return 0;
}
