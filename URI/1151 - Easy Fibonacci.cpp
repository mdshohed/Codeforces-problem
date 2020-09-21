#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,first=0,second=1,fib,n;
    cin>>n;
    cout<<first;
    for ( i = 1;  i<n; i++){

         cout<<" "<<second;
        fib = first + second;
        first = second;
        second = fib;

    }
    cout<<endl;
    return 0;
}
