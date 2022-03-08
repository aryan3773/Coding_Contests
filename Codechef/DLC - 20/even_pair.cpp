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
        ll x, y;
        cin >> x >> y;

        ll o1, o2, e1, e2, ans=0;
        if(x%2){
            o1 = (x+1)/2;
            e1 = x/2;
        }
        else{
            o1 = x/2;
            e1 = x/2;
        }

        if(y%2){
            o2 = (y+1)/2;
            e2 = y/2;
        }
        else{
            o2 = y/2;
            e2 = y/2;
        }

        ans = o1*o2 + e1*e2;
        cout << ans << endl;
    }
    return 0;
}