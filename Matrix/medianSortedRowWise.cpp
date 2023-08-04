#include <bits/stdc++.h>

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
    printVector(arr);
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]<=target)
        low=mid+1;
        else
        high=mid-1;
    }
    return low;
    
}
void median(vector<vector<int>> &matrix){
    int rows=matrix.size();
    int cols=matrix[0].size();
    int n=rows*cols;
    int low=matrix[0][0],high=matrix[rows-1][cols-1],mid;
    for(int i=0;i<rows;i++){
        low=min(low,matrix[i][0]);
        high=max(high,matrix[i][cols-1]);
    }
    
    int count=0;
    while(low<=high){
        count=0;
        cout<<"Maximum and Minimum number in the given matrix: "<<high<<" and "<<low<<" respectively"<<endl;
        mid=low+(high-low)/2;
        cout<<"Mid calculated: "<<mid<<endl;
        for(int i=0;i<rows;i++)
        count=count+elementCount(matrix[i],mid);
        cout<<"No of elements less than or equal to mid are: "<<count<<endl;
        if(count<=n/2)
      {  
          cout<<"Count is less than n/2 i.e "<<n/2<<endl;
        low=mid+1;
          
      }
        else
        {
            cout<<"Count is greater than n/2 i.e "<<n/2<<endl;
            high=mid-1;
        }
        
    }
    cout<<"median: "<<low<<endl;
   
}

int main()
{
   vector<vector<int>> matrix={{1,3,4},{2,6,9},{3,6,9},{2,3,7}};
   median(matrix);
   
}