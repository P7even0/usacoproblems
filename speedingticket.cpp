// USACO 2015 December Contest, Bronze
// Problem 2. Speeding Ticket

// Hard coded position. 
#include <bits/stdc++.h>

using namespace std;

int main(){

	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	
	vector<int> limit(100);
	vector<int> bessie(100);
	
	int n, m;
	cin >> n >> m;
	int pos = 0;
	for (int i = 0; i < n; i++){
		int limitend, speed;
		cin >> limitend >> speed;
		for (int i = pos; i < limitend + pos; i++) {
			limit[i] = speed;
			
		}
		pos += limitend;
	}
	
	pos = 0;
	for (int i = 0; i < m; i++){
		int limitend, speed;
		cin >> limitend >> speed;
		for (int i = pos; i < limitend + pos; i++){
			bessie[i] = speed;
			
		}
		pos += limitend;
	}
	
	int max_speed = 0;
	
	for (int i = 0; i < 100; i++){
		max_speed = max(max_speed, bessie[i] - limit[i]);
	}
	
	cout << max_speed << endl;
	
}

