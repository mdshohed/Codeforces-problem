#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen( "in.txt", "r", stdin);
    int n;
    cin >> n;
    stack<int> s;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if ( x==1) {
            int m;
            cin >> m;
            s.push(m);
        }
        if ( x==2 ) {
            if (s.empty()) continue;
            else s.pop();
        }
        if ( x==3 ) {
            if ( s.empty()) cout << "Empty!" << '\n';
            else cout << s.top() << '\n';
        }
    }
    return 0;
}
