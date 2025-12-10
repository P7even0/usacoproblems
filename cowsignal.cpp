// USACO 2016 December Contest, Bronze
// Problem 3. The Cow-Signal

// Basic simulation.

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	
	int m, n, k;
	cin >> m >> n >> k;
	
	for (int i = 0; i < m; i++){
		string s = "";
		for (int j = 0; j < n; j++){
			char c;
			cin >> c;
			s += c;
			for (int t = 0; t < k - 1; t++) s+=c;
		}
		for (int t = 0; t < k; t++) cout << s << endl;
	}
	
	
	return 0;
}
