#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class TIEFighterAssembly {
public:
    int assemble(string salvagedParts) {
        int cnt = 0;
        int x = 0, y = 0, z = 0;
        string s = salvagedParts;

        for (int i = 0; i<s.size(); i++) {
            if (s[i]=='|'||s[i]=='-'||s[i]=='O') {
                if (s[i]=='|') x++;
                else if (s[i]=='-') y++;
                else if (s[i]=='O') z++;

                if ( x<=x&& 2<=y&&1<=z) {
                    cnt++;
                    x-=2, y-=2,z-=1;
                }
            }
            else {
                x = 0, y = 0, z = 0;
            }
        }
        return cnt;
    }
};

/*int main() {
    freopen("in.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        TIEFighterAssembly a;
        int x = a.assemble(s);
        cout << x << endl;
    }
}*/
