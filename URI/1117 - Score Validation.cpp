#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, sum=0;
    int x = 0;
    while (1) {
        cin >> n;
        if ( n>=0 && n<=10) {
            sum+=n;
            x++;
            if(x==2) break;
        }
        else cout << "nota invalida" << '\n';
    }
    cout <<fixed<<setprecision(2) << "media = "<<sum/2 << '\n';
    return 0;
}
