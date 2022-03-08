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
        ll n, k, j=0, i=0;
        cin >> n >> k;
        vll x;
        for(ll i=1; i<=n; i++){
            x.push_back(-i);
        }
        
        for(ll i=0; i<n; i+=2){
            if(j < k){
                x[i] = abs(x[i]);
                j += 1;
            }
            else{
                continue;
            }
        }
        if(n%2){
            i = n-2;
        }
        else{
            i = n-1;
        }

        for(i; i>=0; i-=2){
            if(j < k){
                x[i] = abs(x[i]);
                j += 1;
            }
            else{
                continue;
            }
        }

        for(auto i:x){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}