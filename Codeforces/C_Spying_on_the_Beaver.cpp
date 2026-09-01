#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> g[n + 1];
    for(int i = 2; i <= n; i++){
        int p; cin >> p;
        g[i].push_back(p);
        g[p].push_back(i);
    }

    int m; cin >> m;
    map<int, int> mp;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        mp[x] = 1;
    }

    vector<bool> vis(n + 1, 0);
    vis[1] = true;
    vector<int> ans;
    
    for(auto i : g[1]){
        queue<int> q;
        vis[i] = 1;
        q.push(i);
        while(q.size()){
            int u = q.front(); q.pop();
            if(mp[u]){
                ans.push_back(i);
                break;
            }
            for(auto v : g[u]){
                if(!vis[v]){
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }

    cout << sz(ans) << " ";
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