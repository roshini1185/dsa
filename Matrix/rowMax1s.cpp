#include <bits/stdc++.h>

using namespace std;
int rowMax1s(vector<vector<int>> &matrix,int rows,int cols){
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            if(matrix[j][i]==1)
            return j;
        }
    }
    return -1;
}

int main()
{
   vector<vector<int>> matrix={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,1}};
  int index=rowMax1s(matrix,4,4);
  cout<<"The row with maximum number of 1's has the index: "<<index<<endl;
   
   
   
 
  
}
