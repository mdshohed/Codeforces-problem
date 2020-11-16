/*
problem: Printing some primes
algorithm: sieve 
input:

output:

*/
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8;
bool prime[mx];
vector<int> v;

void sieve() {
    memset(prime,true,sizeof(prime));
    for (int i = 0; i<=mx; i+=2) prime[i] = false;
    prime[2] = true;
    for (int i = 3; i*i<=mx; i+=2) {
        if (prime[i]) {
            for (int j = i*i; j<=mx; j+=i+i) {
                prime[j] = false;
            }
        }
    }
    cout <<  2 << endl;
    int x = 0;
    for (int i = 3; i<=mx; i+=2) {
        if ( prime[i]) {
            x++;
            if ( x%100==0) cout << i << endl;
        }
    }
}

int main (){
    //freopen( "in.txt", "r", stdin );

    sieve(); 
    return 0;
}
