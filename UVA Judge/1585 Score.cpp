/*
problem: 1585 Score
input:
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX

output:
10
9
7
55
30

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    //freopen( "in.txt", "r", stdin );
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sum = 0;
        bool ans = false;
        int x = 0;
        for (int i = 0; i<s.size(); i++) {
            if ( s[i]=='O') ans = true;
            else {
                ans = false;
                x=0;
            }
            if (ans) x++;
            sum+=x;
        }
        cout << sum << endl;
    }

    return 0;
}
