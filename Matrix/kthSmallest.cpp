#include <bits/stdc++.h>
//kth smallest element in row column wise sorted matrix
using namespace std;
void printVector(vector<int> &vec){
    for (auto ele: vec){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int elementCount(vector<int> &arr,int target){
    int n=arr.size();
    int low=0,high=n-1,mid;
    //printVector(arr);
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]<=target)
        low=mid+1;
        else
        high=mid-1;
    }
    return low;
    
}
void median(vector<vector<int>> &matrix,int k){
    int rows=matrix.size();
    int cols=matrix[0].size();
    int n=rows*cols;
    int low=matrix[0][0],high=matrix[rows-1][cols-1],mid;
    int count=0;
    while(low<=high){
        count=0;
        mid=low+(high-low)/2;
      
        for(int i=0;i<rows;i++)
        count=count+elementCount(matrix[i],mid);
       
        if(count<=k-1)
      {  
         
        low=mid+1;
          
      }
        else
        {
            
            high=mid-1;
        }
        
    }
    cout<<"kth smallest element: "<<low<<endl;
   
}

int main()
{
   vector<vector<int>> matrix={{1,3,4},{2,3,7},{2,6,9},{3,6,9}};
   int k=10;
   median(matrix,k);
   
}