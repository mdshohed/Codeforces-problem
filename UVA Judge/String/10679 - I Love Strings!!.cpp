/*
problem: 10679 - I Love Strings!!
algorithm: kmp
input: 
2
abcdefghABCDEFGH
2
abc
abAB
xyz
1
xyz

output: 
y
n
y
*/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define EMPTY_VALUE -1
#define inf 1<<28
#define CLR(x,y) memset( x,y,sizeof(x))
#define Fill(x,y) fill(begin(x),end(x),y)
#define FOR(x,n) for(int i = x; i<n; i++)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);
#define db(x) cout << #x << " -> " << x << endl;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<string,int> mp;

const int mod = 1e9+7;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

/*==============================*/

const int mx_t = 1e5+7;
const int mx_a = 1000+5;
int P[mx_a];

void failure_table(const char *A) {
    int i, j;
    P[0] = -1, i = 1, j = -1;
    while(A[i]) {
        while(j >= 0 && A[j+1] != A[i])
            j = P[j];
        if(A[j+1] == A[i])
            j++;
        P[i++] = j;
    }
}
int kmp(const char *T, const char *S) {
    int i, j;
    int Tlen, Slen;
    Tlen = strlen(T), Slen = strlen(S);
    failure_table(T);
    for(i = 0, j = -1; i < Slen; i++) {
        while(j >= 0 && T[j+1] != S[i])
            j = P[j];
        if(T[j+1] == S[i])
            j++;
        if(j == Tlen-1) {
            return 1;
        }
    }
    return 0;
}

int main (){
#ifdef __sh
    read("in.txt");
#endif
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    int t = 1;
    scanf( "%d",&t);
    getchar();
    while (t--) {

//        string s;
//        cin >> s;
        char s[mx_t];
        gets(s);

        int n;
        scanf( "%d",&n);
        getchar();

       // char ara[mx_a];
        for (int i = 0; i<n; i++) {
//            string ara;
//            cin >> ara;
            char ara[mx_a];
            gets(ara);

            if (  kmp( ara, s )==1) cout << "y" << endl;
            else cout << "n" << endl;
        }

    }
    return 0;
}
