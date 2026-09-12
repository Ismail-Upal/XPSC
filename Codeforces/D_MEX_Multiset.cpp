#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n), bc(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    bc = v;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    // for(auto i : v) cout << i << " "; cout << endl;

    map<int, int> a, b, c;
    int x = 0, ok = 0, mxa = 0, mxb = 0, mxc = 0;
    for(auto i : v){
        if(i != x){
            ok = 1;
        }
        if(ok){
            a[i] += mp[i]; continue;
        }

        if(mp[i] >= 3){
            if(mxa == mxb and mxb == mxc){
                mxa++, mxb++, mxc++;
                a[i]++, b[i]++, c[i] += mp[i] - 2;
            }
            else{
                c[i] += mp[i];
            }
        }
        else if(mp[i] == 2){
            if(mxa == mxb and mxb == mxc){
                mxa++, mxb++;
                a[i]++, b[i]++;
            }
            else{
                c[i] += mp[i];
            }
        }
        else if(mp[i] == 1){
            if(mxa == mxb and mxb == mxc){
                mxa++;
                a[i]++;
            }
            else{
                c[i] += mp[i];
            }
        }
        x++;
    }
    // cout << mxa << " " << mxb << " " << mxc << endl;
    if(mxa > mxb + mxc){
        cout << "NO" << endl;
        return;
    }

    string s = "";
    for(auto i : bc){
        if(a[i]) s += 'A', a[i]--;
        else if(b[i]) s += 'B', b[i]--;
        else if(c[i]) s += 'C', c[i]--;
    }
    cout << "YES" << endl << s << endl;
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