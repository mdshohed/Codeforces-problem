#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {

    int n;
    while(cin>>n){
        if(n==0) break;
        ll sum = 0, a, b, x;
        priority_queue<int,vector<int>,greater<int>> p;
        for (int i = 0; i<n; i++) {
            int x;
            cin >> x;
            p.push(x);
        }
        for (int i = 1; i<n;i++){
            a = p.top();
            p.pop();
            b = p.top();
            p.pop();
            x = a+b;
            sum+=x;
            p.push(x);
        }
        cout << sum << endl;
    }
    return 0;
}
