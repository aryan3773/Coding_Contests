#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll d1, v1, d2, v2, p, ans=1, i=0, j=0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    while(i < p){
        ans += 1;
        if(ans >= d1){
            i += v1;
        }

        if(ans >= d2){
            i += v2;
        }
        //cout << i << " " << ans << endl;
    }

    cout << ans << endl;
    return 0;
}