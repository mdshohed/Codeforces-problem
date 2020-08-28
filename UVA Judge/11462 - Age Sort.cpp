#include <bits/stdc++.h>
using namespace std; 

int main (){
    //freopen("in.txt", "r", stdin);
    int n;
    while (scanf("%d",&n)&&n!=0 ){

        for (int i = 0; i<n; i++) scanf("%d",&ara[i]);

        sort(ara,ara+n);

        for (int i = 0; i<n; i++){
            printf("%d",ara[i]);
            if  ( i<n-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
