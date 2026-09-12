#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<int, vector<int>> mp;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x].push_back(i);
    }

    set<ll> ans;
    
    for(auto [mx, v] : mp){
        if(mx == 0){
            ans.insert(v[0]);
        }
        for(int i = 0; i < mx; i++){
            if(i == 0){
                ans.insert(v[0] - 1);
                continue;
            }
            ll j = 0;
            while(j < sz(v)){
                ll x = v[j] * i - 1;
                x += v[j];
                ans.insert(x);
                
                int l = j, r = sz(v) - 1, res = -1;
                while(l <= r){
                    int m = l + (r - l) / 2;
                    if(v[m] <= x){
                        l = m + 1;
                        res = m;
                    }
                    else r = m - 1;
                }
                j = res + 1;
            }
            
        }
    }
    
    cout << sz(ans) << endl;
    for(auto i : ans) cout << i << " ";
    cout << endl;
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






