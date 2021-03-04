#include <bits/stdc++.h>
using namespace std;

#define d 256
const int mx = 1e6+7;
vector<int> v;

int search(char pat[], char txt[], int q) {
	int M = strlen(pat);
	int N = strlen(txt);
	int i, j;
	int p = 0;
	int t = 0;
	int h = 1;


	for (i = 0; i < M - 1; i++)
		h = (h * d) % q;
	for (i = 0; i < M; i++) {
		p = (d * p + pat[i]) % q;
		t = (d * t + txt[i]) % q;
	}

    int ans = 0;
	for (i = 0; i <= N - M; i++) {

		if ( p == t ) {

			for (j = 0; j < M; j++) {
				if (txt[i+j] != pat[j]) {
                    break;
				}
			}

			if ( j==M ){
                ans++;
                v.push_back(i+1);
			}
		}

		if ( i < N-M ) {
			t = (d*(t - txt[i]*h) + txt[i+M])%q;
			if (t < 0)
			t = (t + q);
		}
	}
	return ans;
}

int main() {
    //freopen("in.txt", "r", stdin );

	int n;
	cin >> n;
    for (int i = 0; i<n; i++ ) {
        char a[mx], b[mx];
        cin >> a >> b;

        int x = search( b, a , 101);
        if (x) {
            cout << x  << endl;
            for (int i = 0; i<v.size(); i++ ) {
                cout << v[i] << " ";
            }
            cout << "\n"; 

        }
        else cout << "Not Found" << endl;

        cout << "\n";
        v.clear();
    }
	return 0;
}

