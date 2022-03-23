#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    ll t, mod = 1e9 + 7; cin >> t;
    for(int u=1; u<=t; u++){
        cout << "Case #" << u << ": ";
        ll n, ans = 0, pp = 0; cin >> n;
        vector<int> idx, ido;
        string x, s=""; cin >> x;

        for(int i=0; i<n; i++){
            if(x[i] == 'X'){
                idx.push_back(i);
            }
            if(x[i] == 'O'){
                ido.push_back(i);
            }
        }
        
        if(idx.size() == 0 or ido.size() == 0){
            cout << 0 << endl;
        }
        else{
            int i =0, j = 0;
            if(ido[0] < idx[0]){
                i += 1;
                pp = 2;
            }
            else{
                j += 1;
                pp = 1;
            }

            while(i < ido.size() and j < idx.size()){
                if(ido[i] < idx[j]){
                    if(pp == 1){
                        ans = (ans + (n - ido[i])*(idx[j-1] + 1))%mod;
                        pp = 2;
                    }
                    i += 1;
                }

                if(ido[i] > idx[j]){
                    if(pp == 2){
                        ans = (ans + (n - idx[j])*(ido[i-1]+1))%mod;
                        pp = 1;
                    }
                    j += 1;
                }
            }

            if(j<idx.size() and pp == 2){
                ans = (ans + (ido[i-1]+1)*(n-idx[j]))%mod;
            }

            if(i<ido.size() and pp == 1){
                ans = (ans + (n-ido[i])*(idx[j-1]+1))%mod;
            }

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