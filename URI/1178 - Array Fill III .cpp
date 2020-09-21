#include <bits/stdc++.h>
using namespace std;

int main() {

    double x; cin >> x;
    double ara[100];
    for(int i = 0; i<100; i++) {
        ara[i] = x;
        x /=2;
        printf( "N[%d] = %.4lf\n",i,ara[i]);
    }

    return 0;
}
