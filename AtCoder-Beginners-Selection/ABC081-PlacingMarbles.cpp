#include <iostream>
using namespace std;
 
int main() {
	string num;
	cin >> num;
 
	int count = 0;
 
	for (int i = 0; i < 3; i++) {
		if (num.substr(i,1) == "1") {
			count += 1;
		}
	}
 
	cout << count;
 
	return 0;
}
