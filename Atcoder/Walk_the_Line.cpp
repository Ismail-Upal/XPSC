#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, s, L; cin >> n >> s >> L;
    vector<ll> v(n);
    for(ll i = 1; i < n; i++) cin >> v[i];
    vector<ll> pref(n + 1);
    for(ll i = s + 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i - 1];
    }
    for(ll i = s - 1; i >= 1; i--){
        pref[i] = pref[i + 1] + v[i];
    }

    ll res = 1;
    for(ll i = 1; i <= n; i++){
        if(pref[i] <= L){
            res = max(res, abs(s - i) + 1);
        }
    } 

    for(ll i = 1; i < s; i++){
        if(pref[i] > L) continue;

        ll l = s, r = n, m, ans = s;
        while(l <= r){
            m = l + (r - l) / 2;
            if(pref[i] + 2 * pref[m] <= L){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }
      
        res = max(res, abs(ans - i) + 1);
    }

    for(ll i = s + 1; i <= n; i++){
        if(pref[i] > L) continue;

        ll l = 1, r = s, m, ans = s;
        while(l <= r){
            m = l + (r - l) / 2;
            if(pref[i] + 2 * pref[m] <= L){
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }

        res = max(res, abs(i - ans) + 1);
    }

    cout << res;
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