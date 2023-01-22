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
   int size;
   cin >> size;
   string str1;
   cin >> str1;
   string str2;
   cin >> str2;
   int paint = 0;
   int sol = -1;
   if (str1[0] != 'B')
   {
      paint = 1;
   }
   bool touch = false;
   for (int i = 0; i < size; i++)
   {
      if (!touch)
      {
         if (str1[i] == 'B')
         {
            touch = true;
            paint = 0;
         }
         else if (str2[i] == 'B')
         {
            touch = true;
            paint = 1;
         }
      }
      else
      {
         if ((paint == 1 && str2[i] == 'W') || (paint == 0 && str1[i] == 'W'))
         {
            break;
         }
         if (paint == 1 && str1[i] == 'B')
         {
            str2[i] = 'W';
            paint = 0;
         }
         if (paint == 0 && str2[i] == 'B')
         {
            str1[i] = 'W';
            paint = 1;
         }
      }
      str1[i] = 'W';
      str2[i] = 'W';
   }
   for (int i = 0; i < size; i++)
   {
      if (str1[i] == 'B' || str2[i] == 'B')
      {
         cout << "NO\n";
         return;
      }
   }
   cout << "YES\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   local();
   int t = 1;
   cin >> t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}