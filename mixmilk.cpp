// USACO 2018 December Contest, Bronze
// Problem 1. Mixing Milk

// We use modulo by three to decide what bucket is pouring and receiving.

#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
    vector<int> capacity;
    vector<int> currMilk;
   	for (int i = 0; i < 3; i++){
   		int cap, milk;
   		cin >> cap >> milk;
   		capacity.push_back(cap);
   		currMilk.push_back(milk);
   	}
   	
   	
   	for (int i = 0; i < 100; i++){
   			int bucket1 = i % 3;
   			int bucket2 = (i + 1) % 3;
   			
   			int amt = min(currMilk[bucket1], capacity[bucket2] - currMilk[bucket2]);
   			
   			currMilk[bucket1] -= amt;
   			currMilk[bucket2] += amt;
   	}
   	
   	for (int i = 0; i < 3; i++){
   		cout << currMilk[i] << endl;
   	}
   
    
    return 0;
}
