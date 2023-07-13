#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;

	set<int> s;

	for (int i = 0; i < n; ++i)
	{
		int c;
		cin >> c;
		s.insert(c);
	}

	for (int i = 0; i < m; ++i)
	{
		int c;
		cin >> c;
		set<int>::iterator it = s.find(c);
		if (it != s.end()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}

int main() {

	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}