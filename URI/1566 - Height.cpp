#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x),end(x)

int main() {
    // freopen( "in.txt", "r", stdin);
    int t; 
    cin >> t; 
    while (t--) {
    int n; 
    cin >> n; 
    std::vector<int> a(n); 
    for(int &i: a) cin >> i; 
    int mx = *max_element(all(a)); 
    int mn = *min_element(all(a));
    int size = mx - mn + 1;
    vector<int> cnt(size,0); 
    for(int i = 0; i<n; i++) {
        cnt[a[i] - mn]++; 
    }
    int j = 0; 
    for(int i = mn; i<=mx; i++) {
        while(cnt[i-mn]-->0) {
            a[j++] = i; 
        }
    }
    cout << a[0]; 
    for(int i = 1; i<n; i++) {
        cout << " " << a[i]; 
    }
    cout << endl; 
    }
    return 0; 
}
