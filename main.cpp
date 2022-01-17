#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ull unsigned long long
#define vi vector <int>
#define vsi vector <short int>
#define vll vector <long long>
#define Hacks_by_itmo ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

// Problem: 6
 
/*
4 8
3 4 1 2
2 3 4 5
1 16 2 4 5 6 10 15
*/
 
ll GCD(ll a, ll b) {
    if (a > b) {
        swap(a, b);
    }
    while (a != 0 && b != 0) {
        if (a > b) {
            a %= b;
        } 
        else {
            b %= a;
        }
    }
    return max(a, b);
}
 
bool cmp (pair <ll, ll> a, pair <ll, ll> b) {
    double q = double(a.first) / a.second;
    double q1 = double(b.first) / b.second;
    return q <= q1;
}
 
signed main() {
    Hacks_by_itmo;
    ll n, q, nod, g = 0;
    cin >> n >> q;
    vll a(n), b(n), c(q); vector<pair<ll, ll>> v (n * n); 
    Cin (a, n); Cin (b, n); Cin (c, q);
    forn (i, n) {
        forn (j, n) {
            nod = GCD(a[i], b[j]);
            v[g].first = a[i] / nod;
            v[g].second = b[j] / nod;
            g++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    forn (x, q) {
        cout << v[c[x] - 1].first _ v[c[x] - 1].second << endl;
    }
}
