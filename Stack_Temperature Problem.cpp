#include <bits/stdc++.h>
using namespace std;


//function


void temperatures(vector<int>& T)
{
    int n = T.size();
    //store my ans
    vector<int> days(n,0);
    stack<int> s;


    //traverse
    for(int i =0;i<n i++)
    {
      //check ans do calc 
      while(!s.empty() && T[s.top()] < T[i])
      {
        days[s.top()] = i - s.top();


         //pop
        s.pop();
      }
      //push 
      s.push(); 
    }


    //print waiting days
    for(i=0 ; i<n ; i++)
    {
        cout<<days[i]<<" ";
    }


}


int main()
{


        vector<int> A{ 73, 74, 75, 71,
                                        69, 72, 76, 73 };


        temperatures(A);


        return 0;
}