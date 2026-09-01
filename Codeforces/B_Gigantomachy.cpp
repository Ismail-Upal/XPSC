#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int s1 = a[n - 1], s2 = b[m - 1];
    for(int i = 0; i < n - 1; i++) s1 += a[i] - a[i + 1] + 1;
    for(int i = 0; i < m - 1; i++) s2 += b[i] - b[i + 1] + 1;

    if(s1 >= s2) cout << 1 ;
    else cout << 2 ;
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