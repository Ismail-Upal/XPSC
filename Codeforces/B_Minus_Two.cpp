#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n), mp(n, -1);
    int odd = 0, evn = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] % 2 == 0) mp[i] = v[i] / 2;
        else cnt++;
    }

    for(int i = 0; i < n; i++){
        if(mp[i] == -1) continue;
        if(mp[i] % 2) odd++;
        else evn++;
    }

    cout << max({cnt, odd, evn}) << endl;
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