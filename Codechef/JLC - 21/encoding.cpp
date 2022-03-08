#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;

int main(){
    ll t;
    cin >> t;
    unordered_map<string, char> z;
    z["0000"] = 'a';
    z["0001"] = 'b';
    z["0010"] = 'c';
    z["0011"] = 'd';
    z["0100"] = 'e';
    z["0101"] = 'f';
    z["0110"] = 'g';
    z["0111"] = 'h';

    z["1000"] = 'i';
    z["1001"] = 'j';
    z["1010"] = 'k';
    z["1011"] = 'l';
    z["1100"] = 'm';
    z["1101"] = 'n';
    z["1110"] = 'o';
    z["1111"] = 'p';

    while(t--){
        ll n;
        string s, temp, ans = "";
        cin >> n >> s;
        vector<string> x;
        for(ll i=0; i<n; i++){
            if(i%4 != 3){
                temp += s[i];
                
            }
            else{
                temp += s[i];
                x.push_back(temp);
                temp = "";
            }
        }
        if(temp.length()>0){
            x.push_back(temp);
        }
        for(auto i:x){
            //cout << i << " and " << z[i] << endl;
            ans += z[i];
        }
        cout << ans << endl;
    }
    return 0;
}