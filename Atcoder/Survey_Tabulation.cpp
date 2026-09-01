#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<string, int> mp;
    int ans = 0;
    while(n--){
        string s; cin >> s;
        for(auto &i : s) i = tolower(i);
        mp[s]++;
        ans = max(ans, mp[s]);
    }
    cout << ans << endl;
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