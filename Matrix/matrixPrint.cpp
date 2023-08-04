#include <iostream>

using namespace std;

 //row wise print
 
void rowPrint(int arr[][ 4], int rows,int cols)
{
    int i, j;
    cout<<"row wise print: "<<endl;
    for (i = 0; i < rows; i++)
      {
        for (j = 0; j < cols; j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
    }
}
void colPrint(int arr[][ 4], int rows,int cols)
{
    int i, j;
    cout<<"Column wise print: "<<endl;
    for (i = 0; i < cols; i++)
      {
        for (j = 0; j < rows; j++)
            cout<<arr[j][i]<<" ";
            cout<<endl;
    }
}
void printRowSum(int arr[][4],int rows,int cols){
    int sum=0;
    cout<<"Row sum: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
}
void printColSum(int arr[][4],int rows,int cols){
     int sum=0;
    cout<<"Column sum: ";
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
    
}
 
int main()
{
    int arr[][4] = {{1, 2, 3,27}, {4, 5, 6,21}, {7, 8, 9,25},{8,3,1,23}};
    rowPrint(arr, 4,4);
    printRowSum(arr,4,4);
    colPrint(arr,4,4);
    printColSum(arr,4,4);
    return 0;
}