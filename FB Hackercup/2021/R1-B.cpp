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
        ll n, m , a, b; cin >> n >> m >> a >> b;
        ll x = n+m-1;
        if(a < x or b < x){
            cout << "Impossible" << endl;
        }
        else{
            cout << "Possible" << endl;
            vector<vector<int>> ans(n, vector<int> (m, 1000));

            for(int i=0; i<n; i++){
                ans[i][0] = 1;
            }
            for(int i=0; i<n; i++){
                ans[i][m-1] = 1;
            }
            for(int i=0; i<m; i++){
                ans[0][i] = 1;
            }
            for(int i=0; i<m; i++){
                ans[n-1][i] = 1;
            }

            ll fill = x-1;
            ans[n-1][0] = b - fill;
            ans[n-1][m-1] = a - fill;
            for(auto i:ans){
                for(auto j:i){
                    cout << j << " ";
                }
                cout << endl;
            }
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