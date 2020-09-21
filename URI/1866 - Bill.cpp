#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0,t;

    cin>>t;
    while(t--){

        sum=0;
        cin>>n;
        for ( i = 1; i<=n; i++){
                if ( i%2==0){
                    sum -=1;
                }
                else{
                    sum +=1;
                }
        }

        cout<<sum<<endl;
    }
    return 0;
}
