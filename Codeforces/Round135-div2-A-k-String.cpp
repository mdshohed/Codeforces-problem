#include <bits/stdc++.h>
using namespace std;

int main() {
    //input( "in.txt");

    int n;
    string s;
    cin >> n >> s;
    map<char,int> mp;
    for(int i=0; i<s.size(); i++) mp[s[i]]++;
    string st = "";
    for (auto i:mp ) {
        if ( i.second%n) {
            cout << -1 << endl;
            return 0;
        }

        string m = string(i.second/n,i.first);
        st += m;
    }
    for(int i = 0; i<n; i++) cout << st;
    cout << endl;
    return 0;
}


/*
input: 
2
aazz
3
abcabcabz
output: 
azaz
-1

*/
