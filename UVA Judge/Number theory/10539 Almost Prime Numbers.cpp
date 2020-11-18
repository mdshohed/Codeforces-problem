/*
problem: 10539 Almost Prime Numbers
algorithm: prime Number
input:
output:
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx = 1e6+7;
bitset<mx> prime;
vector<ll> v;

void sieve() {
    v.push_back(2);
    for (ll i = 3; i*i<=mx; i+=2) {
        if ( !prime[i]) {
            for (ll j = i*i; j<=mx; j+=i+i){
                prime[j] = true;
            }
        }
    }
    for (ll i = 3; i<=mx; i+=2) if (!prime[i]) v.push_back(i);
}

int main (){
f   reopen( "in.txt", "r", stdin);
    ios::sync_with_stdio(false),cin.tie(nullptr);

    sieve();
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        ll cnt = 0;

        for ( ll i = 0; i<v.size(); i++) {
            if ( v[i]*v[i]>b) break;
            for (ll j = v[i]*v[i]; j<=b; j*=v[i]) {
                if ( j>=a) cnt++;
            }
        }
        cout << cnt << endl;
    }
}
