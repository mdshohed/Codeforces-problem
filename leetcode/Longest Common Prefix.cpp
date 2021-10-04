#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(); 
        sort(all(strs)); 
        string ans = "";
        int mn = 205; 
        if (n==1) return ans = strs[0]; 
        for(int i = 0; i<n; i++) mn = min(mn, (int)(strs[i].size())); 
        for(int i = 0; i<mn; i++) {
            int j = 0; 
            char ch = strs[j][i]; 
            if (ch==strs[j+1][i]) {
                for(j = 1; j<n; j++) {
                    if (ch!=strs[j][i]) break;
                }  
            }
            if (j==n) ans += ch; 
            else break; 
        } 
        return ans;
    }
};

int main() {
    freopen("in.txt", "r", stdin );
    vector<string> a; 
    string s; 
    while (cin>>s) {
        a.push_back(s);
    } 
    Solution x; 
    s = x.longestCommonPrefix(a);
    cout << s << endl; 
    return 0;
}
