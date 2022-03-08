#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k, d, s=0;
        cin >> n >> k >> d;
        vll x(n);
        for(ll i=0; i<n; i++){
            cin >> x[i];
            s += x[i];
        }
        ll ans = min(s/k, d);
        cout << ans << endl;
    }
}