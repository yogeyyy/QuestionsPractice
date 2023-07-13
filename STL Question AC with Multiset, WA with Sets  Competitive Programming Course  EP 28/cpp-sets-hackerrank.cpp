#include <bits/stdc++.h>
using namespace std;


int main() {

	int t;
	cin >> t;

	set<int> s;

	for (int i = 0; i < t; ++i)
	{
		int x,y; 

		cin >> x >> y;

		if (x==1)
		{
			s.insert(y);
			continue;
		}
		if(x==2){
			s.erase(y);
			continue;
		}
		if(x==3) {
			set<int>::iterator it = s.find(y);
			if (it != s.end()) //found
			{
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
			continue;
		}
	}
	

	return 0;
}