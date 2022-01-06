#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector <int>
#define vsi vector <short>
#define vll vector <long long>
#define Cheats ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define Sort(vector) (sort(vector.begin(), vector.end())) // n*log n sort of vector
#define Cin(vector, size) for(decltype(size)& size : vector) {cin >> size;} // reading massive for long of resize
#define Cin1(vector, size) for(decltype(size) i=0; i<size; i++) {cin>>vector[i];} // reading massive for any size
#define Cout(vector, size) for(decltype(size) i=0; i<size; i++) {cout<<vector[i]<<endl;} // cout massive with endl
#define Cout1(vector, size) for(decltype(size) i=0; i<size; i++) {cout<<vector[i]<<" ";} // cout massive with " "
#define forn(x, n) for(decltype(n) x = 0; x < n; ++ x) // for [0;n)
#define fornon (x, n) for(decltype(n) x = 1; x <= n; ++ x) // for [1;n]
#define For(x, left, right) for (decltype(left) x=left; x <= right; x++) // for [left;right]
#define _ << " " <<
#define endl '\n'
#define yeS cout<< "YES" << endl;
#define nO cout<< "NO" << endl;

// Problem: https://codeforces.com/contest/1343/problem/B

int b;
signed main () {
	b = 0;
	cout << b;
	Cheats; short t, x, y;
	cin >> t;
	forn (o, t) {
		cin >> x >> y;
		if ((x + y) & 1) {
			cout << "-1 -1" << endl;
			continue;
		}
		if (x > y)
			cout << (x - y) / 2 _ y << endl;
		else
			cout << x _ (y - x) / 2 << endl;
	}
}