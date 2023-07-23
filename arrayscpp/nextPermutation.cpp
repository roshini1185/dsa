/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void
printVector (vector < int >&vec)
{
for (auto ele:vec)
    {
      cout << ele << " ";
    }
  cout << endl;
}

void
nextPermutation (vector < int >&nums)
{
  int n = nums.size ();
  int dip = -1;

  for (int i = n - 2; i >= 0; i--)
    {
      if (nums[i] < nums[i + 1])
	{
	  dip = i;
	  break;
	}
    }

  if (dip == -1)
    reverse (nums.begin (), nums.end ());
  else
    {

      for (int i = n - 1; i >= dip; i--)
	{

	  if (nums[i] > nums[dip])
	    {
	      swap (nums[i], nums[dip]);
	      printVector (nums);
	      break;
	    }
	}
      dip++;
      reverse (nums.begin () + dip, nums.end ());



    }
}

int
main ()
{
  vector < int >vec = { 1, 3, 2 };
  nextPermutation (vec);

  return 0;
}
