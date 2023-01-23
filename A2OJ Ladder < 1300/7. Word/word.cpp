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
   int countLarge = 0;
   int size = s.length();
   for (int i = 0; i < size; i++)
   {
      if (s[i] - 'a' < 0)
      {
         countLarge++;
      }
   }
   if (countLarge > size - countLarge)
   {
      for (int i = 0; i < size; i++)
      {
         s[i] = toupper(s[i]);
      }
   }
   else
   {
      for (int i = 0; i < size; i++)
      {
         s[i] = tolower(s[i]);
      }
   }
   cout << s;
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