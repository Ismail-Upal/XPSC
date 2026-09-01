#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1, 0);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int l = 0, r = 0, i = 0;
    while(v[i] != 0) i++;
    l = i - 1, r = i + 1;
    ll ans = 0;
    while(l >= 0 and r <= n){
        int d1 = abs(v[i] - v[l]);
        int d2 = abs(v[r] - v[i]);
        if(d1 < d2){
            ans += d1;
            i = l;
            l--;
        }
        else if(d1 > d2){
            ans += d2;
            i = r;
            r++;
        }
        else{
            ans += d1;
            i = l;
            l--;
        }
    }
    while(l >= 0){
        int d1 = abs(v[i] - v[l]);
        ans += d1;
        i = l, l--;
    }
    while(r <= n){
        int d2 = abs(v[r] - v[i]);
        ans += d2;
        i = r, r++;
    }
    cout << ans ;
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