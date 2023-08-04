#include <bits/stdc++.h> 
using namespace std;
void rowPrint(vector<vector<int>> arr, int nRows, int mCols)
{
    int i, j;
    cout<<"Actual Matrix print: "<<endl;
    for (i = 0; i < nRows; i++)
      {
        for (j = 0; j < mCols; j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
    }
}
void wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
   vector<int> ans; 
   cout<<"Wave Print of the Matrix:"<<endl;
   for(int j=0;j<mCols;j++){
       if(j%2==0){
         for (int i = 0; i < nRows; i++) {
        cout<< arr[i][j]<<" ";
         }
         cout<<endl;
       }
        else {
         for (int i = nRows - 1; i >= 0; i--) {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
   }
}
int main(){
    vector<vector<int>> arr={{1,5,7,12},{12,16,19,21},{93,82,38,49},{10,94,29,36}};
    rowPrint(arr,4,4);
    wavePrint(arr,4,4);
}