#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int z1 = -1, z2 = -1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 0){
            if(z1 == -1) z1 = i;
            else z2 = i;
        } 
    }

    int ans = -1;
    
    if(z1 == -1 or z2 == -1) ans = -1;
    else if(z1 == 0 and z2 == n - 1) ans = 0;
    else if(z1 == 0 and z2 != -1) ans = 1;
    else if(z1 != -1 and z2 == n - 1) ans = 1;
    else if(z1 > 0 and z2 < n - 1) ans = 2;
    cout << ans << endl;
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