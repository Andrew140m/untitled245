#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector <int>
#define vsi vector <short int>
#define vll vector <long long>
#define Hacks ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Sort(vector) (sort(vector.begin(), vector.end()))
#define Cin(vector, quantity) for(decltype(quantity)& quantity : vector) {cin >> quantity;}
#define Cin1(vector, quantity) for(decltype(quantity) i=0; i<quantity; i++) {cin>>vector[i];}
#define Cout(vector, quantity) for(decltype(quantity) i=0; i<quantity; i++) {cout<<vector[i]<<endl;}
#define Cout1(vector, quantity) for(decltype(quantity) i=0; i<quantity; i++) {cout<<vector[i]<<" ";}
#define forn(x, n) for(decltype(n) x = 0; x < n; ++ x)
#define fornon(x, n) for(decltype(n) x = 1; x <= n; ++ x)
#define For(left, right) for(decltype(left) i = left; i <= right; ++ i)
#define endl '\n'
#define yeS cout << "YES" << endl;
#define nO cout << "NO" << endl;
#define _ << " " <<
 
/*
4
4 2 2
4 4 4
6 5 5
8 13 17
*/
 
signed main() {
    Hacks;
    int n, t, z, g, a, b;
    cin >> t;
    while (t--) {
        ll var = 0;
        cin >> n >> a >> b;
        int v = n;
        if (a == 0) {
            while (b >= v) {
                var++; v += n;
            }
            cout << var << endl;
        }
        else {
            if (a < b) {
                swap(a, b);
            }
            while (a + b >= v) {
                g = min(v, a);
                z = abs(v - g);
                while (g <= a && min(v, b) >= z) {
                    var++; g--; z++;
                }
                v += n;
            }
            cout << var << endl;
        }
    }
}
