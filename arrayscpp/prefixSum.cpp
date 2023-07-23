#include <iostream>

using namespace std;

//Solving getSum queries using prefix Sum technique

int  getSum(int l,int r,int Psum[]){
   
    if(l==0) return Psum[r];
    else return Psum[r]-Psum[l-1];
}
    


int main()
{
    int arr[11]={4,8,12,17,27,34,23,12};
     int Psum[11];
    Psum[0]=arr[0];
    for(int i=1;i<11;i++){
        Psum[i]=Psum[i-1]+arr[i];
    }
   int answer=getSum(0,4,Psum);
   cout<<"Sum: "<<answer<<endl;

    return 0;
}
