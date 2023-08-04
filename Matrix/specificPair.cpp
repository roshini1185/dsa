#include <bits/stdc++.h>

using namespace std;
void printVector(vector<vector<int>> &extra){
    for(auto ele:extra){
        for(auto in:ele){
            cout<<in<<" ";
        }cout<<endl;
    }
}
void specificPair( vector<vector<int>> &vec){
    int rows=vec.size();
    int cols=vec[0].size();
    int maxi=INT_MIN;
    vector<vector<int>> extra(rows,vector<int>(cols,0));
    extra[rows-1][cols-1]=vec[rows-1][cols-1];
    //to fill the last column of the matrix
    for(int i=cols-2;i>=0;i--){
        extra[i][cols-1]=max(vec[i][cols-1],extra[i+1][cols-1]);
    }
    //to fill the last row of the matrix
     for(int i=rows-2;i>=0;i--){
        extra[rows-1][i]=max(vec[rows-1][i],extra[rows-1][i+1]);
    }
    //to fill remaining matrix
    for(int i=rows-2;i>=0;i--){
        for(int j=cols-2;j>=0;j--){
            extra[i][j]=max(vec[i][j],max(extra[i+1][j],extra[i][j+1]));
            maxi=max(maxi,extra[i+1][j+1]-vec[i][j]);
        }
    }
    cout<<"maxi: "<<maxi<<endl;
    cout<<"Maximum value Matrix: "<<endl;
      printVector(extra);
}

int main()
{
   vector<vector<int>> vec;
   vec={{7,-8,9,11,2,-6},{1,2,0,9,-11,6},{9,10,23,-6,7,2},{9,-13,20,17,6,3},{0,2,16,0,-2,8},{-1,2,7,12,13,-3}};
   specificPair(vec);

    return 0;
}
