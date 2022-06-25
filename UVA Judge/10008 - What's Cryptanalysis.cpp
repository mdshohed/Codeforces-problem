#include <bits/stdc++.h>
using namespace std;

typedef pair<char,int> pi;

bool cmp(pi a, pi b) {
    if ( a.second != b.second) return a.second>b.second;
    return a.first<b.first;
}

int main() {
    //freopen( "in.txt", "r", stdin );

    int n;
    string s;
    cin >> n;
    getchar();

    map<char,int> mp;
    vector<pi> v;

    while (n--) {
        getline(cin,s);
        for(int i = 0; i<s.size(); i++ ){
            char ch = toupper(s[i]);
            if ( 'A'<= ch && ch<='Z') {
                mp[ch]++;
            }
        }
    }
    for( auto i:mp) {
        v.push_back( make_pair(i.first,i.second));
    }
    sort( v.begin(),v.end(), cmp);
    for(auto i:v) {
        cout << i.first << " " << i.second << endl;
    }
}
