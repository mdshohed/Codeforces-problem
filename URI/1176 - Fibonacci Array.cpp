#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll ara [100];
    ara[0] = 0;
    ara[1] = 1;
    for (int i = 2; i<100; i++) {
        ara[i] =  ara[i-1] + ara[i-2];
    }
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        printf("Fib(%d) = %lld\n", n,ara[n]);
    }
    return 0;
}
