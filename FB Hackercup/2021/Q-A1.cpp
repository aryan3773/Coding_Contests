#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool isValid(char x){
    if(x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U'){
        return true;
    }
    return false;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    ll t; cin >> t;
    for(int u=1; u<=t; u++){
        cout << "Case #" << u << ": ";
        string s; cin >> s;
        int n = s.size();
        map<char, int> x, y;
        for(int i=0; i<n; i++){
            if(isValid(s[i])){
                x[s[i]] += 1;
            }
            else{
                y[s[i]] += 1;
            }
        }

        if(x.size() + y.size() == 1){
            cout << 0 << endl;
        }

        else{
            int a = 0, b = 0, aa = 0, bb = 0;
            for(auto i:x){
                aa = max(aa, i.second);
                a += i.second;
            }
            for(auto i:y){
                bb = max(bb, i.second);
                b += i.second;
            }

            int mini = min(a + 2*(n - a - bb), b + 2*(n - b - aa));
            // cout << a << " " << aa << " " << b << " " << b << endl;
            cout << mini << endl;
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