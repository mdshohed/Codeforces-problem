#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    //freopen( "in.txt", "r", stdin );
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        bool flag = true;
        while (a!=0 && b!=0 ) {
            int  x = a%10;
            int y = b%10;
            a/=10;
            b/=10;
            if (x!=y) flag = false;
        }
        if( flag && b==0 ) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}
