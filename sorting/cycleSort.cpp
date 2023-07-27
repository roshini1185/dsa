#include <iostream>

using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void cycleSort(int arr[],int n){
    int count=0;
    for(int cs=0;cs<n-1;cs++){
        int pos=cs;
        int item=arr[cs];
        
        cout<<"cycle start point: "<<cs<<" item: "<<item<<endl;
        cout<<"Current position of item "<<item<<" is: "<<pos<<endl;
        //Finding elements smaller than the item.
        for(int i=cs+1;i<n;i++){
            if(arr[i]<=item)
            {
                pos++;
                cout<<"arr["<<i<<"]: "<<arr[i]<<" pos: "<<pos<<endl;
            }
            
        }
        //Found the correct position for item
        //so put the element at pos and consider the 
        //element present at pos previously (before swapping) as item now.
        swap(arr[pos],item);
        count++;
        cout<<"SWappppp---- "<<count<<endl;
        cout<<"Original position of : "<<arr[pos]<<" is at index: "<<pos<<endl;
        
       
        cout<<"Current state of array: ";
        printArray(arr,n);
         cout<<"-------Fixing the cycle--------"<<endl;
        while(pos!=cs){
        cout<<"Current pos: "<<pos<<endl;
        cout<<"Current Cycle start: "<<cs<<endl;
        cout<<"Current item: "<<item<<endl;
            pos=cs;
            for(int i=cs+1;i<n;i++){
                if(arr[i]<item)
                {
                    pos++;
                    cout<<"arr["<<i<<"]: "<<arr[i]<<" pos: "<<pos<<endl;
                }
                
            }
            swap(item,arr[pos]); 
            count++;       
            cout<<"SWappppp---- "<<count<<endl;
            cout<<"Original position of : "<<arr[pos]<<" is at index: "<<pos<<endl;
            cout<<"Current state of array: ";
            printArray(arr,n);
        }
         cout<<"-------Fix ends here--------"<<endl;
    }
    cout<<"Minimum Number of swaps required : "<<count<<endl;
}
int main()
{           //  0 1 2 3 4
    int arr[5]={5,5,4,3,2};
    cycleSort(arr,5);
    printArray(arr,5);
    
    return 0;
}