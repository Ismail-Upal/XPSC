#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    vector<ll> one;
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        if(x == 1) one.push_back(i);
    }

    ll cnt = 0;
    for(ll i = 0; i < sz(one); i++){
        cnt += n - one[i] - (sz(one) - (i + 1));
    }
    cout << cnt << " "; 

    while(sz(one) and one.back() == n){
        one.pop_back(), n--;
    } 

    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            int m = 0;
            while(i < n and s[i] == '0') m++, i++;
            i--;
            for(ll &j : one){
                j = min(j + m, n);
                cnt -= m;
            }
        }
        else{
            for(ll j = 0; j < sz(one); j++){
                if(j == sz(one) - 1){
                    cnt -= n - one[j];
                    one[j] = n;
                }
                else{
                    ll y = one[j + 1] - 1;
                    cnt -= y - one[j];
                    one[j] = y;
                }
            }
        }

        while(sz(one) and one.back() == n) one.pop_back(), n--;

        cout << cnt << " ";
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