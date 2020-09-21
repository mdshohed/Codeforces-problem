#include<bits/stdc++.h>
using namespace std;

bool a,b;
int main()
{
    //freopen("in.txt","r",stdin);
    int l, i,n,t;

    while(scanf("%d",&n) == 1){

        a = b = 0;
        for ( i = 0; i<n; i++){

            cin>>t;

            if (10 > t);
            else if ( 10 <= t && t< 20) a = 1;
            else b = 1;
        }

        if (b) cout<<3<<endl;
        else if (a) cout<<2<<endl;
        else cout<<1<<endl;

    }
    return 0;
}
