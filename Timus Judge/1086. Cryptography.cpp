/**
    problem: 1086. Cryptography
    algorithm: prime
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 1e6+7;
bitset<mx> prime;
vector<int> v;

void sieve() {
    for (int i = 3; i*i<=mx; i+=2) {
        if ( !prime[i]) {
            for (int j = i*i; j<=mx; j+=i+i) {
                prime[j] = 1;
            }
        }
    }
    v.push_back(2);
    for (int i=3; i<=mx; i+=2) if( !prime[i] ) v.push_back(i);

}

int main() {
    freopen( "in.txt", "r", stdin); 
    ios::sync_with_stdio(false),cin.tie(nullptr);

    sieve();
    int t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if ( n==0 ) cout << 0 << endl;
        else cout << v[n-1] << endl;
    }
    return 0;
}
