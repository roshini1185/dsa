#include <iostream>

using namespace std;
//Moore's voting algorithm
void  majorityElement(int arr[],int n){
    int vote=1,majorityIndex=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[majorityIndex])
        vote++;
        else 
        vote--;
        if(vote==0) {majorityIndex=i;
        vote=1;
            
            
        }
        
        
    }
    vote=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[majorityIndex])
        vote++;
    }
    if(vote>n/2) cout<<"Majority element : index-"<<majorityIndex<<" element: "<<arr[majorityIndex]<<endl;
    else cout<<"No majority element"<<endl;
    
    
}

int main()
{
    int arr[10]={10,5,10,6,10,7,10};
   majorityElement(arr,7);

    return 0;
}
