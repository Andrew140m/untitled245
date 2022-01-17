#include <iostream>
typedef unsigned long long ull;
using namespace std;
ull rem(ull x, ull y, ull m) {
	if (x == m - 1 || y == m - 1) return 0;
	if (x + y < m) return 1;
	return (x + y + 2 - m);
}
int main() {
	int t; cin >> t;
	for (int test = 0; test < t; test++) {
		ull n, a, b;
		cin >> n >> a >> b;
		cout << n*((a+1)/n)*((b+1)/n) + ((a+1)/n)*((b+1)%n) + ((b+1)/n)*((a+1)%n) + rem(a % n, b % n, n) - 1 <<endl;
	}
}