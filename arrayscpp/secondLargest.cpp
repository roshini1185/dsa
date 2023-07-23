void secondLargest(int arr[],int n){
    int max=-58686788;
    int secMax=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            if (max>0) secMax=max;
            max=arr[i];
        }
        else  if (arr[i]<max){
            if(arr[i]>secMax) secMax=arr[i];
        }
    }
    cout<<"max: "<<max<<" ";
    cout<<"second max: "<<secMax<<" ";
    
    
}
int main()
{
   int arr[10]={2,5,7,8,10,12,14,27,77,77};
    secondLargest(arr,10);
    return 0;
}
