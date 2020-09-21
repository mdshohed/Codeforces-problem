#include<bits/stdc++.h>
using namespace std;
#define MX 1000

int main()
{
    int i,n,j=0,t;

    cin>>n;
    for ( i = 0; i<MX; i++){

        printf("N[%d] = %d\n",i,j++);
        if ( j == n){
            j = 0;
        }
    }

    return 0;
}
