/*
problem: 1255 - Substring Frequency 
algorithm: KMP algorithm
input:
2
axbyczd
abc
abcabcabcabc
abc
output:
Case 1: 0
Case 2: 4
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
const int mx = 1e6+7;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<string,int> mp;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

int lps[mx];

void failure_table(char* pat) {
    int m = strlen(pat);
    lps[0] = lps[1] = 0;
    for (int i = 2; i<=m; i++) {
        int j = lps[i-1];
        while (1) {
            if ( pat[i-1]==pat[j]) { lps[i] = j+1; break; }
            if (j==0) { lps[i] = 0; break; }
            j = lps[i];
        }
    }
}
int kmpsearch(char* txt, char* pat) {
    int n = strlen(txt), m = strlen(pat);
    int i = 0, j = 0, ans = 0;
    failure_table(pat);

    while (j<n){
        //if (i==n ) break;
        if ( txt[j]==pat[i] ) {
            i++,j++;
            if ( i==m ) {
                ans++;
                i = lps[m];
            }
        }
        else if ( i>0) i = lps[i];
        else j++;
    }
    return ans;
}

int main() {
#ifdef __sh
    read("in.txt");
#endif
//    ios::sync_with_stdio(false);
//    cin.tie(0); cout.tie(0);

    int t, cases = 0;
    scanf( "%d",&t);
    while (t--) {
        CLR(lps,0);
        char txt[mx],pat[mx];
        scanf( "%s%s",&txt,&pat);
        int x = kmpsearch(txt, pat);
        printf( "Case %d: %d\n",++cases,x);
    }
    return 0;
}
