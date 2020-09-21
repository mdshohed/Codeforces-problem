#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //freopen( "in.txt", "r", stdin);

    int n , m;
    while (scanf("%d%d",&n,&m) != EOF) {
        ll fact = 1;
        ll fact2 = 1;
        for (int i = 1; i<=n; i++) {
            fact *=i;
        }
        for (int i = 1; i<=m; i++) {
            fact2 *=i;
        }
        cout << fact2+fact << endl;
    }
    return 0;
}
