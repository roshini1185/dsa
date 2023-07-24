#include <iostream>
#include <bits/stdc++.h>

using namespace std;
float median(vector <int> &nums1,vector <int> &nums2){
    int cut1,cut2,left1,left2,right1,right2;
    if(nums2.size()<nums1.size())  median(nums2,nums1);
    int n1=nums1.size(),n2=nums2.size();
    int totalSize=n1+n2;
    float median=0.0;
    int low=0,high=n1-1;
    while(low<=high)
{    cut1=(low+high)/2;
    cut2=(n1+n2+1)/2-(cut1);
    left1=(cut1==0) ? INT_MIN:nums1[cut1-1];
    left2=(cut2==0) ? INT_MIN:nums2[cut2-1];
    right1=(cut1==n1) ? INT_MAX: nums1[cut1];
    right2=(cut2==n2) ? INT_MAX: nums2[cut2];
    
    if(left1<=right2 && left2<=right1)
    {
        if(totalSize%2==0)
        { 
            median=  (max(left1,left2)+min(right1,right2))/2.0;
            return median;
            
        }
        else
       { 
            median=(max(left1,left2));
            return median;
           
       }
    }
    else if(left2>right1)
    {
        low=cut1+1;
    }
    else
    {
        high=cut1-1;
    }
    
}
    return median;
    
}
int main()
{
   // 1 2 3 4 11 12 12 13 15 121
    vector<int> nums1={1,2,3,4,12,13};
    vector<int> nums2={11,12,15,121};
       float mediian= median(nums1,nums2);
       cout<<"Median: "<<mediian<<endl;
    return 0;
}