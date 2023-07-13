#include <bits/stdc++.h>
using namespace std;


int main() {

	int t;
	cin >> t;

	map<int,multiset<string>> m;

	for (int i = 0; i < t; ++i)
	{
		string s;
		int n;

		cin >> s >> n;

		m[-1*n].insert(s);
	}

	for(auto& it : m){
		auto& students = it.second;
		for(auto student : students) {
			cout << student << " " << it.first*-1 << endl;
		}
	}

	return 0;
}