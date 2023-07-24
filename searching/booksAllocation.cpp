#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> time, int m, int n, int mid) {
	int count=1;
	int sum=0;
    for (int i = 0; i < n; i++) 
	{
        if(sum+time[i]<=mid)
		sum=sum+time[i];
		else
		{count=count+1;
		if(count>m || time[i]>mid)
		return false;
		sum=time[i];}   
	}
      
		return true;
		
}
int bookAllocation(int n, int m, vector<int> time) 
{	
	int min=0;
	int max=0;
	int ans=-1;
    for (int i = 0; i < n; i++) {
        max=max+time[i];
		}
    while (min <= max)
	{
      	int mid=(min+max)/2;
        if (isPossible(time, m, n, mid)) {
          ans = mid;
          max = mid - 1;
        } else
          min = mid + 1;
    }
	return ans;

}
int main(){
    vector<int> time={10,20,30,40};
   int ans= bookAllocation(4,2,time);
   cout<<"Min of Max books that can be allocated: "<<ans<<endl;

}