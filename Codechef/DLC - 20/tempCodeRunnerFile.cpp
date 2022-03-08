#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n, x, a;
        cin >> n >> x;
        vll y;
        for(ll i=0; i<n; i++){
            cin >> a;
            y.push_back(a);
        }
        ll i=0, l=0;
        for(ll temp = x; temp>0 and i<n-1; temp--){
            ll temp1 = 0;
            ll p = log(y[i])/log(2);
            ll m = pow(2, p);
            y[i] ^= m;

            for(ll k = i+1; k<n; k++){
                if(y[k]^m < y[k]){
                    y[k] ^= m;
                    temp1 = 1;
                    break;
                }
            }

            if(temp1 == 0){
                y[n-1] ^= m;
            }

            while(y[i] <= 0){
                i += 1;
            }

            l = temp + 1;
        }

        if(l > 0){
            if(l%2 == 1 and n<3){
                y[n-1] ^= 1;
                y[n-2] ^= 1;
            }
        }

        for(ll i=0; i<n; i++){
            cout << y[i] << " ";
        }
        cout << endl;
    }
    return 0;
}