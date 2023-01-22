#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void local()
{
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
   freopen("../../error.txt", "w", stderr);
#endif
}
void solve(int t)
{
   int matrix[5][5];
   int x = 0;
   int y = 0;
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         cin >> matrix[i][j];
         if (matrix[i][j] == 1)
         {
            x = j;
            y = i;
         }
      }
   }
   int a = abs(x - 2);
   int b = abs(y - 2);
   cout << a + b;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   local();
   int t = 1;
   // cin>>t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}