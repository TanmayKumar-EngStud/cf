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
   int number;
   cin >> number;
   string res = "YES";
   if (number == 4 || number == 7)
   {
      cout << res;
      return;
   }
   while (number > 0)
   {
      int num = number % 10;
      if (num != 4 && num != 7)
      {
         res = "NO";
         break;
      }
      (number -= num) /= 10;
   }
   cout << res;
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