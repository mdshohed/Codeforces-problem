/*
problem: 674 - Coin Change
algorithm: greedy (coin change) 
input: 
11
26

output: 
4 
13
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

const int MOD = 1e9+7;
const int mx = 1e5+9;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<string,int> mp;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

int ara[5] = {1,5,10,25,50};

int coin_change(int n,int x) {
    int coin[x+1];
    CLR(coin,0);
    coin[0] = 1;
    for (int i = 0; i<n; i++) {
        for (int j = ara[i]; j<=x; j++) {
            coin[j] = coin[j]+coin[j-ara[i]];
        }
    }
    return coin[x];
}

int main() {
    //read( "in.txt" );
    int x;
    while (scanf("%d",&x)!=EOF) {
        cout << coin_change( 5, x) << endl;
    }
    return 0;
}
