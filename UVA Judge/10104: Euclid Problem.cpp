#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b, ll& x, ll& y) {
    if ( b == 0 ) {
         x =  1;
         y = 0;
         return a;
    }
    ll x1, y1;
    ll d = gcd( b, a%b, x1, y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen( "in.txt", "r", stdin);

    ll a, b;
    while( scanf("%lld%lld",&a,&b) !=EOF) {
        ll x, y;
        ll g = gcd( a, b, x, y);
        cout << x << " " << y << " " << g << endl;
    }

    return 0;
}
