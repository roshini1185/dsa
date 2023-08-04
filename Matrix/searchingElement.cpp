#include <bits/stdc++.h> 
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==target)
                return true;
            }
        }
        return false;
    }

 int main(){
    vector<vector<int>> arr={{1,5,7,12},{12,16,19,21},{93,82,38,49},{10,94,29,36}};
    int target=29;
   bool found=searchMatrix(arr,target);
   if(found)
   cout<<"found "<<target<<" in the matrix"<<endl;
   else
   cout<<target<<" not found in the given matrix"<<endl;
}