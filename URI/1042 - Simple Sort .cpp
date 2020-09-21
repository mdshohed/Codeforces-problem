#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  a,b,c;


    cin>>a>>b>>c;

    int x=a,y=b,z=c;

    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    if (a>b) swap( a,b);

    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}
