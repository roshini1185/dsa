#include <iostream>

using namespace std;
 string countAndSay(int n) {
        string ans="";
        if(n==1)
        {
            ans="1";
            return ans;
        }
        if(n==2)
        {
            ans="11";
            return ans;
        }

        ans=countAndSay(n-1);
        string temp="";
        int l=ans.length(),count=1;
        for(int i=1;i<l;i++){
            if(ans[i]!=ans[i-1])
            {temp+=to_string(count);
            temp+=ans[i-1];
            count=1;}
        else
        count++;

        }
        temp+=to_string(count);
            temp+=ans[l-1];
        
        ans=temp;
    return ans;

        

    }
int main()
{
    int n=6;
    string ans=countAndSay(n);
    cout<<ans<<endl;
    return 0;
}
