#include <bits/stdc++.h>
using namespace std;

int main() {
    double sum = 0, x = 1;
    for(int i = 1; i<=39; i+=2) {
        sum+=(double)(i/x);
        x = x+x;
    }
    cout <<fixed<<setprecision(2) << sum << '\n';
    return 0;
}
