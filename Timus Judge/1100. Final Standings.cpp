/**
    problem: 1100. Final Standings
    algorithm: ...
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

struct node {
    int x, y;
};
bool cmp(node a,node b) {
    return a.y> b.y;
}

int main() {
    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        vector<node> v(n);

        for (int i = 0; i<n; i++) {
            cin >> v[i].x >> v[i].y;
        }

        stable_sort( all(v),cmp);

        for (int i = 0; i<n; i++) {
            cout << v[i].x << " " << v[i].y << endl;
        }
        cout << endl;
    }
    return 0;
}
