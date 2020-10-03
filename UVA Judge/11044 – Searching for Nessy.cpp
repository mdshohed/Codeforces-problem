/*
problem: 11044 – Searching for Nessy
input:
3
6 6
7 7
9 13
output: 
4
4
12
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //read( "in.txt");
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x = n/3, y = m/3;
        cout << x*y << endl;
    }
    return 0;
}
