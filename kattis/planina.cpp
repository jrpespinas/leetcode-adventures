#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int itr, line=2;
	cin >> itr;

	line = pow(2, itr) + 1;
	cout << line * line;

	return 0;
}
