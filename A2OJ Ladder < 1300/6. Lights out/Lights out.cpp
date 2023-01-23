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
   int matrix[3][3];
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> matrix[i][j];
      }
   }
   // fixing the lights.
   int mat[3][3];
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         int sum = matrix[i][j];
         if (i - 1 >= 0)
         {
            sum += matrix[i - 1][j];
         }
         if (i + 1 < 3)
         {
            sum += matrix[i + 1][j];
         }
         if (j - 1 >= 0)
         {
            sum += matrix[i][j - 1];
         }
         if (j + 1 < 3)
         {
            sum += matrix[i][j + 1];
         }
         if (sum % 2 == 0)
         {
            mat[i][j] = 1;
         }
         else
         {
            mat[i][j] = 0;
         }
      }
   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << mat[i][j];
      }
      cout << "\n";
   }
}
int main()
{
   local();
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t = 1;
   // cin>>t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}