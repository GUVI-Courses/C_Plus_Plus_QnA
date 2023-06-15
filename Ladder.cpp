#include <iostream>
using namespace std;


int findWays(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }
    int call1 = findWays(n-1);
    int call2 = findWays(n-2);
    int result = call1 + call2;
    return result;
}


int main()
{
int n = 4;
cout<<findWays(n);        
return 0;
}