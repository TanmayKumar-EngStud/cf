#include <iostream>
#include <vector>
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
   int x = 0;
   int y = 0;
   int z = 0;
   for (int i = 0; i < t; i++)
   {
      int tempX = 0, tempY = 0, tempZ = 0;
      cin >> tempX >> tempY >> tempZ;
      x += tempX;
      y += tempY;
      z += tempZ;
   }
   if (x == 0 && y == 0 && z == 0)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }
}
int main()
{
   ios::sync_with_stdio(0);
   local();
   cin.tie(0);
   int t = 1;
   cin >> t; // comment if there are no test cases.
   solve(t);
   return 0;
}