#include <iostream>

using namespace std;

int squareRoot(int number,int low,int high)
{
    int mid=(low+high)/2;
    if(low>high) return mid;
    else{
        if((mid*mid)==number)
        return mid;
        else if((mid*mid)>number)
        squareRoot(number,low,mid-1);
        else
         squareRoot(number,mid+1,high);
        
    }
}
    

int main()
{
    int number=77;
    int root=squareRoot(number,1,number-1);
    cout<<"root of "<<number<<" : "<<root<<endl;
   

    return 0;
}