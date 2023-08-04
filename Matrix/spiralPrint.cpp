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

void spiralOrder(vector<vector<int>>& matrix) {
        
        int rows,cols;
        rows=matrix.size();
        cols=matrix[0].size();
        int count=0,total=rows*cols;
        int startingRow=0;
        int startingCol=0;
        int endingRow=rows-1;
        int endingCol=cols-1;
        cout<<"Spiral print: "<<endl;
        //Why the condition is count<total?
        //We traverse each element only once so we have to run the loop for (no. of elements)-total time.
        while(count<total){
            //printing Starting Row
            for(int index=startingCol;count<total && index<=endingCol;index++)
            {
               cout<<matrix[startingRow][index]<<" ";
               count++;
            }
            startingRow++;
            //printing Ending Column
            for(int index=startingRow;count<total && index<=endingRow;index++){
                
                cout<<matrix[index][endingCol]<<" ";
                count++;
            }
            endingCol--;
            //printing Ending Row
            for(int index=endingCol;count<total && index>=startingCol;index--){
                 cout<<matrix[endingRow][index]<<" ";
                 count++;
            }
            endingRow--;
            //Printing Starting Column
             for(int index=endingRow;count<total && index>=startingRow;index--){
               cout<<matrix[index][startingCol]<<" ";
                 count++;
            }
            startingCol++;

        }

    }
    int main(){
    vector<vector<int>> arr={{1,5,7,12},{12,16,19,21},{93,82,38,49},{10,94,29,36}};
    rowPrint(arr,4,4);
    spiralOrder(arr);
}