#include "stdafx.h"
#include <iostream>
# include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long ans = 0;
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		ans = ans + a[i];
	}

	return ans;
}

int main() {
	vector<int>arr = { 0, 1, 2, 3, 4 };

	cout << sum(arr) << endl;
}