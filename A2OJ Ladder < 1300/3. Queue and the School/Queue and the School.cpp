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
void swap(char &a, char &b)
{
   char temp = a;
   a = b;
   b = temp;
   return;
}
void solve(int t)
{
   int len = 0, itr = 0;
   cin >> len >> itr;
   string s;
   cin >> s;

   for (int i = 0; i < itr; i++)
   {
      for (int j = 0; j < len - 1; j++)
      {
         if (s[j] == 'B' && s[j + 1] == 'G')
         {
            swap(s[j], s[j + 1]);
            j++;
         }
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
   // cin >> t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}