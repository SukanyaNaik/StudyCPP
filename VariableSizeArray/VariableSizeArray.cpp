// VariableSizeArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0, q = 0, k = 0, i = 0, j = 0, l = 0, m = 0;

	cin >> n >> q;
	cout << "\n";

	int **ptr = new int*[n];

	for (i = 0; i < n; i++) {
		cin >> k;
		ptr[i] = new int[k+1];
		ptr[i][0] = k;
		for (j = 1; j <= k; j++) {
			cin >> ptr[i][j];
		}
	}
	
	for (i = 0; i < q; i++) {
		cin >> l >> m;
		cout << ptr[l][m=1] << "\n";
	}
	return 0;
}
