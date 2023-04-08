#include <iostream>
#include <vector>
// #include <stdio.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int arr[200] = {};


	vector<int> vec(N);
	for (int i = 0; i < N; ++i) {
		int A;
		cin >> A;
		arr[i] = A;
	}

	int count = 0;
	int state = 0;

	for (int m = 0; m < m + 2; m++) {
		
		for (int l = 0; l < N; l++) {
			int amari = arr[l] % 2;
			if(amari != 0){
				state = 0;
				break;
			}
			else {
				arr[l] /= 2;
			}
			if (l == N - 1) {
				state = 1;
			}
		}
		if (state == 1) {
			count += 1;
		}
		else {
			break;
		}
	}

	cout << count;

	return 0;
}
