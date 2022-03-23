#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    ll t; cin >> t;
    int large = 2e9;
    for(int u=1; u<=t; u++){
        cout << "Case #" << u << ": ";
        int n, m, ans=0, temp; cin >> n >> m;
        multiset<pair<int, int>> x, y;

        for(int i=0; i<m; i++){
            cin >> temp;
            x.insert({temp, 1});
        }

        while(n--){
            y.clear();
            vector<int> a;
            for(int i=0; i<m; i++){
                cin >> temp;
                if(x.find({temp, 0}) != x.end()){
                    x.erase(x.find({temp, 0}));
                    y.insert({temp, 0});
                    continue;
                }
                else{
                    a.push_back(temp);
                }
            }

            vector<int> b;
            for(auto z:a){
                if(x.find({z, 1}) != x.end()){
                    x.erase(x.find({z, 1}));
                    y.insert({z, 1});
                    continue;
                }
                else{
                    b.push_back(z);
                }
            }

            for(auto i:x){
                y.insert({b.back(), 0});
                b.pop_back();
                if(i.second == 0){
                    ans += 1;
                }
            }
            x = y;
        }
        cout << ans << endl;
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