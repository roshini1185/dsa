#include <bits/stdc++.h>

//Time Complexity: O(NLOGN)

using namespace std;
void duplicatesSorting(string s){
  sort(s.begin(),s.end());
  for(int i=0;i<s.length()-1;i++){
      int count=1;
      while(s[i]==s[i+1])
      {
         count++;
         i++;
      }
      if(count>1)
      cout<<"Character: "<<s[i]<<" appears "<<count<<" times."<<endl;
      
      
  }
}
int main()
{
    string s="andaman and nicobar islands";
    duplicatesSorting(s);
    
    
    

    return 0;
}