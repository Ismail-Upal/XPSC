#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int a, b; cin >> a >> b;
    if(a + b == 9 or a - b == 9 or (a % b == 0 and a / b == 9) or a * b == 9) cout << "Nine";
    else cout << "Nein";
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}