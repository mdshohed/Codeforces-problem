#include <bits/stdc++.h>
using namespace std;


int main() {
    
    //freopen( "in.txt", "r",stdin);
    
    string s;
    while (cin>>s) {
    
        int x = 0;

        if (s[0]=='0'&&s.size()==1) break;
        else{
            for (int i = 0; i<s.size(); i++){
                x = x*10+ (s[i]-'0');
                x%=17;
            }
            if(x==0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}
