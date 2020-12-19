#include <bits/stdc++.h>
using namespace std;

int binary(int n) {
    int sum = 0, x = 1;
    while ( n>0) {
        int rem = n%2;
        sum += rem*x;
        x*=10;
        n/=2;
    }
    return sum;
}

int main() {
    //freopen( "in.txt", "r", stdin );

    int t, cases = 0;
    cin >> t;
    while ( t-- ) {
        int a, b, c, d, x, y, z, m;
        scanf( "%d.%d.%d.%d",&a,&b,&c,&d);
        scanf( "%d.%d.%d.%d",&x,&y,&z,&m);

        cout << "Case " << ++cases << ": ";
        if ( binary(a)==x&&binary(b)==y&&binary(c)==z&&binary(d)==m) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}


