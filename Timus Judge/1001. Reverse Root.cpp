/**
    problem: 1001. Reverse Root
    algorithm: ...
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

int main (){

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    vector<ld> v;
    while ( scanf( "%lld",&n)!=EOF ) {
        ld x = sqrt(n);
        v.push_back(x);
    }
    for (int i = 0; i<v.size(); i++) {
        cout <<fixed<<setprecision(4) << v[v.size()-i-1] << endl;
    }
    return 0;
}
