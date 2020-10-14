/*
problem: 673 Parentheses Balance
algorithm: stack problem 
input:
3
([])
(([()])))
([()[]()])()

output:

*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define EMPTY_VALUE -1
#define inf  1<<28
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);

const int MOD = 1e9+7;
const int mx = 1e5+9;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<string,int> mp;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

int main() {
    //read( "in.txt" );
    int t;
    cin >> t;
    getchar();
    while (t--) {
        string s;
        getline(cin,s);
        stack<char> st;
        for (int i = 0; i<s.size(); i++) {
            if ( s[i]=='('||s[i]=='[') {
                st.push(s[i]);
            }
            else if (!st.empty()&&(s[i]==')'&&st.top()=='(')) {
                st.pop();
            }
            else if (!st.empty()&&(s[i]==']'&&st.top()=='[')) {
                st.pop();
            }
            else st.push(s[i]);
        }
        if (st.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
