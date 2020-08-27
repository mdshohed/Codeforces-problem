    #include <bits/stdc++.h>
    using namespace std;
     
    const int mx = 2*1e5+7;
    typedef long long ll;
     
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        //freopen( "in.txt", "r", stdin);
     
        int n;
        cin >> n;
        int ara[mx];
        for (int i = 0; i<n; i++) cin >> ara[i];
        ll s=0, s3=0, ans =0, i=0,  j=n-1;
     
        while (i<=j) {
            if ( s<=s3) s+=ara[i++];
            else s3+=ara[j--];
            if ( s==s3) ans = max( ans,s);
        }
        cout << ans << endl;
     
        return 0;
    }
