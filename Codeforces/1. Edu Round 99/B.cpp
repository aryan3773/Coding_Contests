#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, ans = 0;
        cin >> n;
        while((ans*(ans+1))/2 < n){
            ans += 1;
        }

        if((ans*(ans+1))/2 == n+1){
            ans += 1;
        }

        cout << ans << endl;
    }
    return 0;
}