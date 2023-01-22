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
   string s;
   cin >> s;
   int length = s.length();
   string nums = "";
   for (int i = 0; i < length; i++)
   {
      if (s[i] == '.')
      {
         nums += "0";
      }
      else if (i + 1 < length)
      {
         if (s[i + 1] == '.')
         {
            nums += "1";
         }
         else
         {
            nums += "2";
         }
         i++;
      }
   }
   cout << nums;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t = 1;
   local();
   // cin >> t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}