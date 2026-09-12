#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll x, y, k; cin >> x >> y >> k;
    ll ans = 0;
    for(ll i = 0; i < k; i++){
        ll m = (y + i) % (x + i);
        if(m == 0){
            i++;
            ll j = k - i;
            m = (y + i) % (x + i);
            ans += m * j;
        }
        ans += m;
    }
    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}