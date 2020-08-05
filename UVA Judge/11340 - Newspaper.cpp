#include <bits/stdc++.h>
using namespace std;

int main() {

    //freopen( "in.txt", "r", stdin);
    int n;
    cin >> n;
    while(n--){

        map<char,int> mp;
        string s;
        int x, y, k, m;
        double total = 0;
        char c;

        cin >> k;
        for (int i = 0; i<k; i++){
            cin >> c >> x;
            mp[c] = x;
        }

        cin >> m;
        cin.ignore();
        for (int i = 0; i<m; i++){
            getline(cin, s);
            for (int j=0; j<s.size(); j++){
                auto it = mp.find(s[j]);
                if ( it != mp.end()) {
                    total += it->second;
                }
            }
        }
        total/=100;
        cout <<fixed<<setprecision(2)<< total << "$" << endl;
    }
    return 0;
}
