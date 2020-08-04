#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //freopen( "in.txt", "r", stdin);
    int n;
    while(scanf("%d",&n) !=EOF ){

        int ara[50006], v[50007];
        for(int i = 0; i<n; i++) {
            cin >> ara[i];
        }
        for (int i = 0; i<n-1; i++){
            v[i] = abs(ara[i]-ara[i+1]);
        }
        string ans = "Jolly";
        sort(v, v+n-1);

        for(int i = 1; i<=n-1; i++){
            if (v[i-1]!=i) {
                ans = "Not jolly";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
