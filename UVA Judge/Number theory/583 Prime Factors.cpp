/*
problem: 583 Prime Factors
algorithm: prime factor
input: 
output: 
*/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define inf (1<<28)
#define CLR(x,y) memset( x,y,sizeof(x))
#define Fill(x,y) fill(begin(x),end(x),y)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);
#define db(x) cout << #x << " -> " << x << endl;
#define cin(x) scanf( "%d",&n);

typedef long long ll;
typedef vector<int> vv;
typedef pair<int,int> pii;
typedef map<int,int> mp;

const int mod = 1e9+7;
int fx[] = {0, 0, 1, -1};
int fy[] = {1, -1, 0, 0};
/*=======================*/

const ll mx = 50000;
bool prime[mx];
vector<ll> v;

void sieve(){
    v.push_back(2);
    for(ll i = 3; i*i<=mx; i+=2) {
        if (prime[i]==false) {
            for (ll j = i*i; j<=mx; j+=i+i ) {
                prime[j] = true;
            }
        }
    }
    for (ll i = 3; i<=mx; i+=2) {
        if(prime[i]==false) v.push_back(i);
    }
}

vector<ll> primefactor(ll n) {
    vector<ll> ans;
    for (ll i = 0; v[i]*v[i]<=n; i++) {
        if ( n%v[i]==0) {
            while ( n%v[i]==0) {
                n/=v[i];
                ans.push_back(v[i]);
            }
        }
    }
    if ( n!=1) ans.push_back(n);
    return ans;
}

int main (){
#ifdef __sh
    read("in.txt");
    //write( "out.txt");
#endif
    //ios::sync_with_stdio(false),cin.tie(nullptr);
    sieve();
    ll n;
    while ( scanf("%lld",&n) && n!=0 ) {
        vector<ll> ans = primefactor( abs(n) );
        if ( n<0) {
            cout << n << " = " << -1;
            for (int i = 0; i<ans.size(); i++) cout << " x " << ans[i];
            cout << endl;
        }
        else {
            cout << n << " = " << ans[0];
            for (int i = 1; i<ans.size(); i++) cout << " x " << ans[i];
            cout << endl;
        }
        ans.clear();
    }
    return 0;
}
