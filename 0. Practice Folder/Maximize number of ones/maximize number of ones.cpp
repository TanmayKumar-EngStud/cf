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
class Solution
{
public:
   int findZeroes(int arr[], int n, int m)
   {
      int count = 1;
      int countZero = m;
      int j = 0;

      // first we need to shrink..
      for (int i = 1; i < n; i++)
      {
         if (arr[i - 1] == arr[i])
         {
            count++;
         }
         else
         {
            if (arr[i - 1] == 0)
            {
               arr[j++] = -1 * count;
               count = 1;
            }
            else
            {
               arr[j++] = count;
               count = 1;
            }
         }
      }
      while (j < n)
      {
         arr[j++] = 0;
      }
      for (int i = 0; i < n; i++)
      {
         cout << arr[i] << " ";
      }
      cout << "\n";
      return count;
   }
};
void solve(int t)
{
   int n;
   cin >> n;
   int x = n;
   int arr[n];
   while (x)
   {
      int temp;
      cin >> temp;
      arr[n - x] = temp;
      x--;
   }
   int m;
   cin >> m;
   Solution s;
   int ans = s.findZeroes(arr, n, m);
   cout << ans;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   local();
   int t = 40;
   cin >> t; // comment if there are no test cases.
   while (t--)
      solve(t);
   return 0;
}