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
   int num;
   cin >> num;
   if (num < 10)
   {
      cout << num << "\n";
   }
   else
   {
      num /= 10;
      int sum = 9;
      while (num > 10)
      {
         num /= 10;
         sum += 9;
      }
      sum += num;
      cout << sum << "\n";
   }
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