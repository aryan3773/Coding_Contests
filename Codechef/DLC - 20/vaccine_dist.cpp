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
        ll n, d, a, x=0, y=0, q=0;
        cin >> n >> d;

        for(ll i=0; i<n; i++){
            cin >> a;
            if(a >= 80 or a <= 9){
                x += 1;
            }
            else{
                y += 1;
            }
        }
        a = 0;
        if(x != 0){
            a += 1 + (x-1)/d;
        }
        if(y != 0){
            a += 1 + (y-1)/d;
        }
        cout << a << endl;
    }
    return 0;
}