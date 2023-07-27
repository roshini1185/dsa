#include <bits/stdc++.h>

using namespace std;
//two sorted arrays are given
// start frm begining of any array
//after encountering an intersection decide which array to traverse in order to get largest sum possible.
int
main ()


{
  int m = 4, n = 3, i = 0, j = 0, sumi = 0, sumj = 0, max_sum = 0;
  int first[4] = {-5, 100, 1000, 1005 };
  int second[3] = { -12, 1000, 1001};
  sort(first,first+m);
  sort(second,second+n);
  printArray(first,m);
  while (i < m && j < n)
    {
      if (first[i] == second[j])
	{
	  cout << "hi" << endl;
	  
	  max_sum += max (sumi, sumj);
	  max_sum += first[i];
	  sumi = 0;
	  sumj = 0;
	  i++;
	  j++;

	}
      else
	{
	  if (first[i] < second[j])
	    {
	      sumi = sumi + first[i];
	      i++;

	    }
	  else
	    {
	      sumj = sumj + second[j];
	      j++;
	    }


	}
    }
  cout << "sum1:" << max_sum << endl;
  while (i < m || j < n)
    {
      if (i < m)
	{
	  sumi = sumi + first[i];
	  i++;
	}
      else
	{
	  sumj = sumj + second[j];
	  j++;
	}
    }
cout<<"sumi: "<<sumi<<endl;
cout<<"sumj: "<<sumj<<endl;

  max_sum += max (sumi, sumj);
  cout<<"sum final: "<<max_sum;


return 0;
}
