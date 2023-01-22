#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void local()
{
#ifndef ONLINE_JUDGE
   freopen("../../input.txt", "r", stdin);
   freopen("../../output.txt", "w", stdout);
   freopen("../../error.txt", "w", stderr);
#endif
}
bool check(int num)
{
   int i = num % 10;
   vector<int> list;
   while (num > 0)
   {
      for (int j = 0; j < list.size(); j++)
      {
         if (list[j] == i)
         {
            return false;
         }
      }
      list.push_back(i);
      num -= i;
      num /= 10;
      i = num % 10;
   }
   return true;
}
void solve(int t)
{
   int number = 0;
   cin >> number;
   number++;
   while (!check(number))
   {
      number++;
   }
   cout << number;
}
int main()
{
   local();
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t = 1;
   // cin >> t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}