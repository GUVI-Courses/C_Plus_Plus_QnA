#include <bits/stdc++.h>
using namespace std;
 
string formatString(string s, int k)
{
    int n =s.size();
    int count = 0;
    string ans = "";


    for(int i = n-1 ; i>=0 ; i--)
    {
        if(s[i]==' ')
        continue;


        if(count<k)
        {
            count++;
            ans+=toupper(s[i]);
        }


        else
        {
            ans +=' ';
            count =1;
            ans+=toupper(s[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main()
{
    string s = "4F3Z 2e 9 w";
    int k = 4;


    cout<<formatString(s,k);
    return 0;
}