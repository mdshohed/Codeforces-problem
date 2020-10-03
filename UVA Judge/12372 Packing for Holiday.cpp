/*
problem: 12372 Packing for Holiday
input:
2
20 20 20
1 2 21

output:
Case 1: good
Case 2: bad

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen( "in.txt", "r", stdin );
    int t, cases = 0;
    cin >> t;
    while (t--) {
        int l, w, h;
        cin >> l >> w >> h;
        if ( (l<=20&& w<=20) && (w<=20&&h<=20)) {
            cout << "Case " << ++cases << ": good" << endl;
        }
        else cout << "Case " << ++cases << ": bad" << endl;
    }
    return 0;
}
