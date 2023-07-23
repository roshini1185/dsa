#include <iostream>

using namespace std;
// stock profit problem.
void maxProfit(int stock[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(stock[i]>stock[i-1] ){
            profit+=stock[i]-stock[i-1];
        }
    }
    cout<<"Sell and Buy stock Profit: "<<profit;
    
    
    
}
int main()
{
   int arr[8]={1,5,3,7,8,4,2,12};
   maxProfit(arr,8);

    return 0;
}
