#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second |
#define mp make_pair
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)
int gcd(int a, int b){
    if( b==0 ) return a;
    return gcd(b,a%b);
}

typedef long long ll;
typedef pair<int,int> pii;
typedef map<int,int> mp;

const int mx = 1e5+7;

int main(){

    //freopen( "in.txt", "r", stdin );
    
    int n; cin >> n;
    string s;
    getline( cin, s );
    while(n--) {

        int ara[100];

        getline( cin, s);
        stringstream is(s);

        int k = 0;
        while ( is>>ara[k] ) k++;
        int ans = 0;
        for (int i= 0; i<k ;i++){
            for (int j = i+1; j<k; j++){
                ans = max(ans ,gcd(ara[i],ara[j]));
            }
        }
        cout << ans << endl;
    }

    return 0;
}
