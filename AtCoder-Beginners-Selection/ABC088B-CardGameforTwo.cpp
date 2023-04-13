#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <array>
// #include <stdio.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	array<int,100> arr = {};

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		arr[i] = A;
	}

	// 得点
	int sumA = 0;
	int sumB = 0;

	// 降順並び替え
	sort(arr.rbegin(), arr.rend());

	for (int k = 0; k < N; k++) {
		if (k % 2 == 0) {
			sumA += arr[k];
		}
		else {
			sumB += arr[k];
		}
	}

	int ans = sumA - sumB;

	cout << ans;

	return 0;
}
