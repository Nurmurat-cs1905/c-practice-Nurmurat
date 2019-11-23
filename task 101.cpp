#include <iostream>
using namespace std;
int main() {
	for (int i = 10000; i <= 99999; i++) {
		int b = i % 10;
		int c = i / 10 / 10 % 10;
		int d = i / 10 / 10 / 10 % 10;
		int e = i / 10 / 10 / 10 / 10 % 10;
		int f = i / 10 / 10 / 10 / 10 / 10 % 10;
		if (i % 2 == 0 && (b + c + d + e + f) %4 == 0) {
			cout << i << " ";
		}
	}
}