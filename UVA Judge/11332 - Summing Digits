#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second |
#define mp make_pair
#define CLR(x,y) memset( x,y,sizeof(x))
#define for(x,n) for(int i = x; i<n; i++)

typedef long long ll;
typedef pair<int,int> pii;
typedef map<int,int> mp;

const int mx = 1e5+7;

int f(ll n){
    int sum = 0;
    while(n!=0){
        int b = n%10;
        n/=10;
        sum+=b;
    }
    return sum;
}

int main(){
    ll n;
    while (scanf( "%lld",&n)&& n!=0){
        int sum = 0;
        for(0,3){
            int sum = f(n);
            n = sum;
        }
        cout << n << endl;
    }
    return 0;
}
