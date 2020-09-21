#include<bits/stdc++.h>
using namespace std;
double ara[12][12];

int main()
{
    int i,j,l;
    char t;
    double sum=0;
    
    cin>>l;
    cin>>t;
    for ( i = 0; i<12; i++){
        for ( j = 0; j<12; j++){

            cin>>ara[i][j];
            if( l == j){
                sum +=ara[i][j];
            }
        }
    }
    if ( t=='S'){
        printf("%lf\n",sum);
    }
    else{
        printf("%.1lf\n",sum/12);
    }
    return 0;
}
