#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n - 1);
    for(int i = 0; i < n - 1; i++) cin >> v[i];  
    
    int t = 0;
    while(v[t] != 2) t++;
    vector<int> b;
    for(int i = t; i >= 0; i--) b.push_back(v[i]);
    if(is_sorted(b.begin(), b.end()) and is_sorted(v.begin() + t, v.end())) cout << 2 ;
    else cout << 0;
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