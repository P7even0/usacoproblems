// USACO USACO 2019 January Contest, Bronze
//Problem 1. Shell Game

We create a clams vector and a counter vector. The objective is to keep track of how many times a single shell can be guessed. We can make sure we increment the right counter by using the value as a reference, hence line 29.




#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   	int n;
   	cin >> n;
   	vector<int> clams = {0, 1, 2};
   	vector<int> counter = {0, 0, 0};
   
   	for (int i = 0; i < n; i++){
   		int a, b, g;
   		cin >> a >> b >> g;
   		a--;
   		b--;
   		g--;
   		int temp =  clams[a];
   		clams[a] = clams[b];
   		clams[b] = temp;
   		counter[clams[g]]++;
   	}
   	int maxnum = 0;
   	for (int i = 0; i < 3; i++) maxnum = max(maxnum, counter[i]);
   	
   	cout << maxnum << endl;
   
    
    return 0;
}
