#include <iostream>
using namespace std;
 
int main() {
	int a, b;
	cin >> a >> b;
 
	int target = a * b;
 
	if (target % 2 == 0) {
		cout << "Even";
	}
	else {
		cout << "Odd";
	}
 
	return 0;
}
