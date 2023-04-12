#include <iostream>
#include <vector>
// #include <stdio.h>
using namespace std;

// 50円を何枚使う必要があるか計算
int calc50(int X, int C){
	if (X <= 50 * C) {
		return 1;
	}
	else {
		return 0;
	}
}

// 100円をm枚使う場合
int calc100(int X, int B, int C) {
	// この関数内でのカウント用
	int count100 = 0;

	// 100円をm枚使う場合
	for (int m = 0; m <= B; m++) {
		if (X == 100 * m) {
			// ピッタリ！
			count100 += 1;
		}
		else if (X < 100 * m) {
			// 金額オーバー
			break;
		}
		else {
			// 金額内
			// あとはcalc50にお任せ！
			int sub_X = X - 100 * m;
			count100 += calc50(sub_X, C);
		}
	}

	return count100;
}

int main() {
	int A;
	int B;
	int C;
	int X;

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> X;

	// カウント用
	int count = 0;

	// 500円をn枚使う場合
	for (int n = 0; n <= A; n++) {
		if (X == 500 * n) {
			// ピッタリ！
			count += 1;
		}
		else if (X < 500 * n) {
			// 金額オーバー
			break;
		}
		else {
			// 金額内
			// あとはcalc100にお任せ！
			int sub_X = X - 500 * n;
			count += calc100(sub_X, B, C);
		}
	}

	cout << count;
	return 0;
}
