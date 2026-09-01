#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    for(int i = 0; i < 2 * n; i++){
        if(s[i] == '1'){
            if(i + 1 == 2 * n){
                if(s[0] == '0'){
                    s[0] = '1';
                    s[i] = '2';
                    i++;
                }
            }
            else{
                if(s[i + 1] == '0'){
                    s[i] = '2';
                    s[i + 1] = '1';
                    i++;
                }
            }
        }
    }

    int odd = 0, evn = 0;
    for(int i = 0; i < 2 * n; i++){
        if(s[i] == '2') s[i] = '0';
        if(s[i] == '1'){
            if((i + 1) % 2 == 0) evn++;
            else odd++;
        } 
    }
    // cout << s << endl;
    cout << evn << " " << odd << endl;
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