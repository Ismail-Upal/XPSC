#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    if(k < n or k == 2 * n){
        cout << -1 << endl;
        return;
    }
    int a[n + 1][n + 1]; memset(a, 0, sizeof a);
    int x = 2 * n - k;
    int y = k - x;

    for(int i = 1; i <= x; i++) a[i][i] = i;
    int z = x + 1;
    
    for(int i = x + 1; i <= n; i++){
        a[i][1] = z++;
    }
    for(int i = x + 1; i <= n; i++){
        a[1][i] = z++;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0) a[i][j] = z++;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

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