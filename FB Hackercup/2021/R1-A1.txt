#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    ll t; cin >> t;
    for(int u=1; u<=t; u++){
        cout << "Case #" << u << ": ";
        ll n; cin >> n;
        string x, s=""; cin >> x;

        for(auto i:x){
            if(i != 'F'){
                s += i;
            }
        }

        ll m = s.size();
        if(m == 0){
            cout << 0 << endl;
        }
        else{
            string t = "";
            for(int i=0; i<m-1; i++){
                if(s[i] != s[i+1]){
                    t += s[i];
                }
            }
            t += s[m-1];

            ll ans = t.size()-1;
            cout << ans << endl;
        }
    }
    return 0;
}

/*
import sys
# For getting input from input.txt file
sys.stdin = open('input.txt', 'r')
 
# Printing the Output to output.txt file
sys.stdout = open('output.txt', 'w')
*/