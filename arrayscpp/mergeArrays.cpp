#include <iostream>

using namespace std;

void printArray(int arr[],int n){
 for(int i=0;i<n;i++){

cout<< arr[i]<<" ";

 }cout<< endl;

    void merge(int nums1[], int m, int  nums2[], int n) {
        int i=0,j=0;
        vector <int> nums3;
        while(i<m && j<n){
            if(nums1[i]<nums2[j])
            {
                nums3.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j]){
                nums3.push_back(nums2[j]);
                j++;
            }
            else{
                nums3.push_back(nums1[i]);
                nums3.push_back(nums2[j]);
                i++;
                j++;
            }
             }
        while(i<m || j<n){
            if(i<m)
            {
               nums3.push_back(nums1[i]);
                i++; 
            }
            else
            {
                 nums3.push_back(nums2[j]);
                j++;
            }
        }
    
        for(int i=0;i<m+n;i++){
            nums1[i]=nums3[i];
           
        }
    }
    int main()
{
     int nums1[] = {1,2,3,0,0,0};
    int nums2[]={2,5,6};
    merge(nums1,3,nums2,3)
    printArray(nums1,6);
    return 0;
}