#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e7;
vector<bool> prime(N + 1, 1);
vector<int> primes;

void sieve() {
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= N; i++){
        if(prime[i]){
            primes.push_back(i);
            if((ll)i * i <= N){
                for(ll j = (ll)i * i; j <= N; j += i){
                    prime[j] = 0;
                }
            }
        }
    }
}

void Solve(){
    string s; cin >> s;
    int n = sz(s);

    for(int p : primes){
        string t = to_string(p);
        if(sz(t) != n) continue;

        bool ok = true;
        for(int i = 0; i < n && ok; i++){
            for(int j = i + 1; j < n; j++){
                if((s[i] == s[j]) != (t[i] == t[j])){
                    ok = false;
                    break;
                }
            }
        }

        if(ok){
            cout << t << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{   
    fast;
    sieve();
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    return 0;
}