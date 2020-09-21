#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //freopen( "in.txt", "r", stdin);

    ll n , m;
    while (scanf("%lld%lld",&n,&m) != EOF) {
        cout << abs( n - m ) << endl;
    }
    return 0;
}
