#include <iostream>
#include <vector>
#define ll long long

using namespace std;
void local()
{
#ifndef ONLINE_JUDGE
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);
	freopen("../../error.txt", "w", stderr);
#endif
}
void fast()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

string solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	string concat1 = s1 + s2;
	string concat2 = "";
	ll cs;
	cin >> cs;
	while (cs--)
	{
		string ci;
		cin >> ci;
		concat2 += ci;
	}
	int arr[26] = {0};
	for (auto i : concat1)
		arr[i - 'a']++;
	for (auto i : concat2)
		arr[i - 'a']--;
	for (int i = 0; i < 26; i++)
		if (arr[i] < 0)
			return "NO";

	return "YES";
}

int main()
{
	local();
	fast();
	ll t;
	cin >> t;
	while (t--)
		cout << solve() << "\n";
	return 0;
}
