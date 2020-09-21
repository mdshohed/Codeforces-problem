#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    while(cin>>x,x){
        int sum =0;
        for( i = x; i< x+(5*2); i++){
            if(i%2==0){
                sum +=i;
                sum*4;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
