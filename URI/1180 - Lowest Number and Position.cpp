#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    
    int x[1000],i,n,position=0;
    cin>>n;
    for( i= 0; i<n; i++){
        cin>>x[i];
    }
    int min = x[0];
    for(i = 0; i<n; i++){
        if( min>x[i]){
            min = x[i];
            position =i;
        }
    }
    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<position<<endl;
    return 0;
}
