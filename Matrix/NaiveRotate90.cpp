//Naive
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
   vector<vector<int>> extra(n,vector<int>(n,0));
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           extra[j][n-1-i]=mtx[i][j];
       }
   }
   cout<<"Actual Matrix: "<<endl;
   printVector(mtx);
   cout<<"After rotating Matrix by 90: "<<endl;
   printVector(extra);
}

int main()
{
   vector<vector<int>> vec;
   vec={{7,-8,9,11,2,-6},{1,2,0,9,-11,6},{9,10,23,-6,7,2},{9,-13,20,17,6,3},{0,2,16,0,-2,8},{-1,2,7,12,13,-3}};
  cout<<"Naive Approach: "<<endl;
  rotate90(vec);

    return 0;
}
