#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll one = 0, ten = 0, hund = 0;
    for(ll i : v){
        ll ans = 0;
        ll x = i;
        if(x % 1000 != 0) x = x - (x % 1000) + 1000;
        ans += x / 1000;
        x -= i;
        hund += x / 100, x %= 100;
        ten += x / 10, x %= 10;
        one += x;
    }
    cout << one << " " << ten << " " << hund;
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