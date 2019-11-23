#include <iostream>
using namespace std;
int main() {
	for (int i = 100; i <= 999; i++) {
		int b = i % 10;
		int c = i / 10 / 10 % 10;
		int d = i / 10 / 10 / 10 % 10;
		if (b * b * b + c * c * c + d * d * d == i) {
			cout << i << " ";
		}
	}
}