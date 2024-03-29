#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string res = "";
		stack<char>st;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != ')') {
				st.push(s[i]);
			} else {
				string tmp = "";
				while (!st.empty() && st.top() != '(') {
					tmp = tmp + st.top();
					st.pop();
				}
				if (st.empty()) {
					tmp += "-1";
				} else {
					tmp += "1";
					tmp = "0" + tmp;
				}
				res += tmp;
			}
		}
		cout << res << endl;
	}
	return 0;
}