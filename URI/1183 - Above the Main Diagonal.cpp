#include<bits/stdc++.h>
using namespace std;
double ara[12][12];

int main()
{
    int i,j,l=0;
    char t;
    double sum=0;

    cin>>t;
    for ( i = 0; i<12; i++){
        for ( j = 0; j<12; j++){

            cin>>ara[i][j];
            if( i>j){
                sum +=ara[i][j];
                l++;
            }
        }
    }
    if ( t=='S'){
        printf("%lf\n",sum);
    }
    else{
        printf("%.1lf\n",sum/l);
    }
    return 0;
}
