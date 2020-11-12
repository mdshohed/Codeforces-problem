#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int cycle ( ll n ) {
    int x = 1;
    while ( n !=1 ) {
        if ( n%2==0 ){
            n = n/2;
        }
        else {
            n = 3*n + 1;
        }
        x++;
    }
    return x;
}
int main() {
    ll a, b;
    while ( scanf( "%lld%lld", &a, &b) != EOF ) {
        ll x1 = a, x2 = b;
        int mx = 0, t = 0;
        if( a>b) {
            for ( int i= a; i >=b; i--) {
                t = cycle(i);
                if ( t >= mx) mx = t;
            }
        }
        else {
            for ( int i= b; i>=a; i--) {
                t = cycle(i);
                if ( t >= mx) mx = t;
            }
        }
        cout << x1 << " " << x2 << " "<< mx << '\n';
    }
    return 0;
}
