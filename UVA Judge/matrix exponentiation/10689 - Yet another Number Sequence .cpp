#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)

typedef long long ll;
typedef pair<int,int> pii;
typedef map<int,int> mp;

const int mx = 1e5+7;

struct matrix {
    int v[5][5];
    int row, col;
};

int mod = 10000;

matrix multiply( matrix a, matrix b){
    assert( a.col == b.row );
    matrix r;
    r.row = a.row;
    r.col = b.col;
    for (int i = 0; i<r.row; i++){
        for ( int j = 0; j<r.col; j++ ){
            int sum = 0;
            for (int k = 0; k<r.col; k++){
                sum += a.v[i][k] * b.v[k][j];
                sum %= mod;
            }
            r.v[i][j] = sum;
        }
    }
    return r;
}

matrix power(matrix mat, int p ){
    assert(p>=1);
    if ( p==1 ) return mat;
    if (p%2==1)
        return multiply(mat, power(mat, p-1));
    matrix ret = power(mat, p/2);

    ret = multiply( ret, ret);
    return ret;
}

int main(){

    //freopen( "in.txt", "r", stdin );

    int tcase;
    cin >> tcase;
    while (tcase--){
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        matrix mat;

        mat.row = mat.col = 2;
        mat.v[0][0] = 1;
        mat.v[0][1] = 1;
        mat.v[1][0] = 1;
        mat.v[1][1] = 0;

        mod = 1;

        for (int i = 0; i<m; i++) mod*=10;
        a%=mod;
        b%=mod;

        if ( n < 3){
            if (n == 0) cout <<a << endl;
            if ( n== 1) cout << b << endl;
            if ( n == 2 ) cout << (a+b)%mod << endl;
        }
        else {
            mat = power(mat, n-1);
            int ans = b * mat.v[0][0] + a * mat.v[0][1];
            ans%=mod;
            cout << ans << endl;
        }
    }
    return 0;
}
