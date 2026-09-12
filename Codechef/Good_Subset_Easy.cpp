#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> v(n), mp(50, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        int l;
        for(int k = 31; k >= 0; k--){
            if(v[i] & (1ll << k)){
                l = k; break;
            }
        }

        mp[l]++;
    }

    ll ans = 0;
    for(int i = 0; i < 32; i++) ans = max(ans, mp[i]);

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