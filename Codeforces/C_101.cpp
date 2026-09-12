#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == -1) v[i] = 1;
        if(v[i] == 1){
            l = i; break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(v[i] == -1) v[i] = 1;
        if(v[i] == 1){
            r = i; break;
        }
    }

    for(int i = 0; i < n; i++){
        if(v[i] == -1) v[i] = 0;
    }

    for(auto i : v) cout << i << " ";
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