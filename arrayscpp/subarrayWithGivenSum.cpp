//Finding a subarray from given array with the given sum

bool  subarrayWithGivenSum(int arr[],int n,int sum){
    //sliding window technique with variable length of window is used.
    int s=0,e=0,present_sum=0;
    for(int e=0;e<n;e++)
    {
        present_sum+=arr[e];
        while(present_sum>sum){
            present_sum-=arr[s];
            s++;
        }
        if(present_sum==sum)
        return true;
        
    }
    return false;
}
    


int main()
{
    int arr[11]={4,8,12,17};
   bool found;
   found=subarrayWithGivenSum(arr,4,17);
   if(found)
   cout<<"Yes";
   else
   cout<<"No";

    return 0;
}
