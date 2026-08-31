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

    int i = 1, j = n - 1;
    while(i < n){
        if(v[i] == v[i - 1]) break;
        i++;
    }
    while(j >= 1){
        if(v[j] == v[j - 1]) break;
        j--;
    }

    if(i == n) cout << 0;
    else if(v[i] == v[j]) cout << j - i ;
    else cout << j - i - 1;
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