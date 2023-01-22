#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>
#include <utility>
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

   string str;
   cin >> str;

   map<pair<char, char>, int> mpp;
   pair<char, char> prev = {str[0], str[1]};
   mpp[prev]++;
   for (int i = 2; i < num; i++)
   {
      pair<char, char> ab = {str[i - 1], str[i]};
      if (mpp[ab] != 0)
      {
         if ((ab == prev && mpp[ab] > 1) || (ab != prev))
         {
            cout << "YES\n";
            return;
         }
      }
      prev = ab;
      mpp[ab]++;
   }
   cout << "NO\n";
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