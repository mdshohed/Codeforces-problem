/*
problem: 1107 - How Cow 
algorithm: a point in ractangle inside or outside
input: 
1
1 2 8 10
7
0 0
5 6
1 0
7 9
3 5
10 10
1 11
output: 
Case 1:
No
Yes
No
Yes
Yes
No
No
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define EMPTY_VALUE -1
#define inf  1<<28
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);
#define db(x) cout << #x << " -> " << x << endl;

const int MOD = 1e9+7;
const int mx = 5e3+9;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<string,int> mp;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

int main() {
#ifdef __sh
    read( "in.txt" );
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, cases = 0;
    cin >> t;
    while (t--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int point ;
        cin >> point;
        cout << "Case " << ++cases << ":" << endl;
        for (int i = 0; i<point; i++) {
            int x, y;
            cin >> x >> y;
            if ( (x>x1 && x<x2)&& (y>y1&&y<y2)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
