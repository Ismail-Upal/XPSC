#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll q, v; cin >> q >> v;
    priority_queue<ll> pq;

    while(q--){
        int tp; cin >> tp;
        if(tp == 1){
            int t, w; cin >> t >> w;
            pq.push(w - t);
        }
        else{
            int t; cin >> t;
            if(pq.empty()) cout << -1 << endl;
            else{ 
                ll mx = pq.top(); pq.pop();
                cout << min(v, mx + t) << endl;
            }
        }
    }
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