#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second |
#define mp make_pair
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)

typedef long long ll;
typedef pair<int,int> pii;
typedef map<int,int> mp;

const int mx = 1e5+7;

int main(){
    ll n;
    while(scanf( "%lld",&n) && n!=0) {

        int ara[1000];
        int cnt = 0, m=0;
        while(n!=0){
            int x = n%2;
            ara[m++] = x;
            n/=2;
            if (x==1) cnt++;
        }
        cout << "The parity of ";
        for (int i = m-1; i>=0; i--){
            cout <<ara[i];
        }
        cout << " is " << cnt << " (mod 2)." << endl;
    }
    return 0;
}
