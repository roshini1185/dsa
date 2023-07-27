 #include <bits/stdc++.h>
#include <iostream>
 using namespace std;
 void  printVector(vector<vector<int>> &vec){
    for(auto out: vec){
        cout<<"{";
        for(auto in :out){
            cout<<in<<" ";
        }cout<<"} ";
    }
   cout<<endl;
 }
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n=intervals.size();
       sort(intervals.begin(),intervals.end());
       vector<vector<int>> ans;
       for(int i=0;i<n;i++){
           if(ans.empty() || ans.back()[1]<intervals[i][0])
           ans.push_back(intervals[i]);
           else
           {
               ans.back()[1]=(max(intervals[i][1],ans.back()[1]));
              
           }

       }
    
    return ans;
 }
 int main()
 {
    vector<vector<int>> ans;
    vector<vector<int>> intervals;
    intervals={{1,4},{0,0},{2,6},{8,9}};
    ans=merge(intervals);
    printVector(ans);
    return 0;
 }