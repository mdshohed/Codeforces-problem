#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, ans;
    cin >> s;
    regex p( "WUB" );
    cout << regex_replace( s, p, " ") << '\n';
    return 0;
}
