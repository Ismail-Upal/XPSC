#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    int ans = 1;
    int ok = 2;
    for(int i = 0; i < n; i += 2){
        if(s[i] != '?'){
            ok = 1;
            break;
        }
        if(i > 0 and s[i] != '?' and s[i] == s[i - 2]){
            ok = 0; break;
        }
    }
    if(ok == 1){
        int pre = 0;
        for(int i = 0; i < n; i += 2){
            if(s[i] != '?'){
                pre = i; break;
            }
        }
        for(int i = pre + 2; i < n; i += 2){
            if(s[i] == '?') s[i] = s[i - 2] == '1' ? '0' : '1';
        }
        for(int i = pre - 2; i >= 0; i -= 2){
            if(s[i] == '?') s[i] = s[i + 2] == '1' ? '0' : '1';
        }

        for(int i = 2; i < n; i += 2){
            if(s[i] == s[i - 2]){
                ok = 0; break;
            }
        }
    }

    ans *= ok;

    ok = 2;
    for(int i = 1; i < n; i += 2){
        if(s[i] != '?'){
            ok = 1;
            break;
        }
        if(i > 1 and s[i] != '?' and s[i] == s[i - 2]){
            ok = 0; break;
        }
    }
    if(ok == 1){
        int pre = 1;
        for(int i = 1; i < n; i += 2){
            if(s[i] != '?'){
                pre = i; break;
            }
        }
        for(int i = pre + 2; i < n; i += 2){
            if(s[i] == '?') s[i] = s[i - 2] == '1' ? '0' : '1';
        }
        for(int i = pre - 2; i >= 0; i -= 2){
            if(s[i] == '?') s[i] = s[i + 2] == '1' ? '0' : '1';
        }

        for(int i = 3; i < n; i += 2){
            if(s[i] == s[i - 2]){
                ok = 0; break;
            }
        }
    }

    ans *= ok;

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