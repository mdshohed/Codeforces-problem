/*
    Problem: 
    Algorithm: Fenwick_tree
*/

#include <bits/stdc++.h>

using namespace std;

const int mx = 200000+5;

class Fenwick_tree{
private:
    vector<int> tree;
public:
    Fenwick_tree(int n ) {
        tree.assign(n+1, 0);
    }

    void update(int i, int x, int n) {
        while ( i<=n) {
            tree[i] += x;
            i += i & (-i);
        }
    }

    int sum(int n) {
        int sum = 0;
        while (n) {
            sum +=tree[n];
            n -= n & (-n);
        }
        return sum;
    }
};

int main() {
    //freopen( "in.txt", "r", stdin );

    int n, a, b, cases = 0;
    char ch[5];
    int ara[mx];

    while (scanf( "%d",&n) && n!=0) {

        Fenwick_tree fenwick(n);

        for (int i = 1; i<=n; i++ ) {
            scanf("%d", &ara[i]);
            fenwick.update(i, ara[i],n);
        }

        if (cases) printf("\n");
        printf( "Case %d:\n",++cases);
        while ( scanf("%s",ch), strcmp(ch, "END")!=0 ) {
            scanf( "%d%d", &a, &b);
            if ( strcmp( ch, "M")==0) {
                printf( "%d\n", fenwick.sum(b)-fenwick.sum(a-1));
            }
            if ( strcmp(ch, "S")==0) {
                int val = b - ara[a];
                fenwick.update( a, val, n);
                ara[a] = b;
            }
        }
    }
}
