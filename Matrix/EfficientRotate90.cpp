//Efficient
#include <bits/stdc++.h>

using namespace std;
void printVector(vector<vector<int>> &extra){
    for(auto ele:extra){
        for(auto in:ele){
            cout<<in<<" ";
        }cout<<endl;
    }
}
void rotate90(vector<vector<int>> &mtx){
   int n=mtx.size();
   //Transpose of Matrix
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++)
       {
           int temp=mtx[i][j];
           mtx[i][j]=mtx[j][i];
           mtx[j][i]=temp;
       }
    }
   
   //Reverse each row
    for(int i=0;i<n;i++){
      reverse(mtx[i].begin(),mtx[i].end());
   }
    
   
   cout<<"After rotating Matrix by 90: "<<endl;
   printVector(mtx);
}

int main()
{
   vector<vector<int>> vec;
   vec={{1,2,3,4,},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  cout<<"Efficient Approach: "<<endl;
  cout<<"Actual Matrix: "<<endl;
   printVector(vec);
  rotate90(vec);

    return 0;
}
