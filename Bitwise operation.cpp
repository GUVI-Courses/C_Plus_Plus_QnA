#include<iostream>
using namespace std;


int unique(int A[], int n)
{
 int ans = 0 ;
 for(int i = 0 ; i< n ; i++)
 {
    ans = ans ^ A[i];
 }
 return ans; 
}
int main()
{
    int A[] = { 4, 3, 5, 6, 5, 3, 4 };
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Element occurring once is "
         << unique(A, n);
    return 0;
}