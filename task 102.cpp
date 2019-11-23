
#include <iostream>
using namespace std;
int main() {
	for (int i = 1000; i <= 9999; i++) {
		int b = i % 10;
		int c = i / 10 / 10 % 10;
		int d = i / 10 / 10 / 10 % 10;
		int e = i / 10 / 10 / 10 / 10 % 10;
		int f = i / 10 / 10 / 10 / 10 / 10 % 10;
		if (b == 3|| c==3||d==3||e==3||f==3) {
			cout << i << " ";
		}
	}
}