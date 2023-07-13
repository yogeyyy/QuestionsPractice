#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;

	long long int sum = 0;

	multiset<long long int> s;

	for (int i = 0; i < n; ++i)
	{
		long long int c;
		cin >> c;
		s.insert(c);
	}

	for (int i = 0; i < k; ++i)
	{
		long long int max = *(--s.end());
		sum += max;
		max = max/2;
		s.erase(--s.end());
		s.insert(max);
	}

	cout << sum << endl;
}


int main() {

	int t;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}