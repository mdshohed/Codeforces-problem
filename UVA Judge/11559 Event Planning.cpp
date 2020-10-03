/*
problem: 11559 Event Planning
input:
3 1000 2 3
200
0 2 2
300
27 3 20
5 2000 2 4
300
4 3 0 4
450
7 8 0 13

output:
900
stay home

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    //freopen( "in.txt", "r", stdin );
    int participants, budget, hotel,  week;
    while (scanf("%d%d%d%d",&participants,&budget,&hotel,&week)==4) {
        ll sum = INT_MAX;
        for (int i = 0; i<hotel; i++) {
            int price;
            cin >>price;
            for (int i = 0; i<week; i++) {
                int x; cin >> x;
                if ( x>=participants) {
                    ll ans =  price*participants;
                    if ( ans<=budget && ans<=sum) {
                        sum = ans;
                    }
                }
            }
        }
        if (sum==INT_MAX) cout << "stay home" << endl;
        else {
            cout << sum << endl;
        }
    }

    return 0;
}
