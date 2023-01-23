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
   s[0] = toupper(s[0]);
   cout << s;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   local();
   int t = 1;
   // cin >> t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}