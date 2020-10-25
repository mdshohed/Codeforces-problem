
Round#130 ( Div 2: A ).cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, ans;
    cin >> s;
    regex p( "WUB" );
    cout << regex_replace( s, p, " ") << '\n';
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string x = "shohed";

    while ( s.find ( x ) != -1 ) {
        s.replace( s.find(x) , x.size(), " " );
    }
    stringstream ss(s);
    while ( ss >> s) {
        cout << s << " ";
    }
    return 0;
}
