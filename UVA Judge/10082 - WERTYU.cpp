/*
problem: 10082 - WERTYU
algorithm: ...
input: 

output: 

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    string s1;
    while(getline(cin,s1)) {
        for (int i = 0; i<s1.size(); i++) {
            for (int j = 0; j<s.size(); j++) {
                if ( s1[i]==s[j]) {
                    s1[i] = s[j-1];
                }
            }
        }
        cout << s1 << endl;
    }
    return 0;
}
