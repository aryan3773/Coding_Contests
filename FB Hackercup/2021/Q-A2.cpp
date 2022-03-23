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
    int large = 100000;
    for(int u=1; u<=t; u++){
        cout << "Case #" << u << ": ";
        string s; cin >> s;
        set<char> ch;
        for(auto i:s){
            ch.insert(i);
        }
        vector<vector<int>> graph(26, vector<int> (26, large)), dist;
        for(int i=0; i<26; i++){
            graph[i][i] = 0;
        }
        int q, n = s.size(); cin >> q;
        while(q--){
            char a, b; cin >> a >> b;
            graph[a-'A'][b-'A'] = 1;
        }
        dist = graph;
        //cout << "Uniqueness of " << s << " is " << ch.size() << endl;
        if(ch.size() == 1){
            cout << 0 << endl;
        }

        else{
            for(int k=0; k<26; k++){
                for(int i=0; i<26; i++){
                    for(int j=0; j<26; j++){
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
            /*cout << "Dist is " << endl;
            for(auto i:dist){
                for(auto j:i){
                    cout << j << " ";
                }
                cout << endl;
            }*/
            int ans = large;
            bool y = false;
            for(int val=0; val<26; val++){
                //cout << "Starting for " << val << endl;
                int temp = 0;
                bool f = true;
                for(int i=0; i<n; i++){
                    //cout << "Char is " << s[i] << endl;
                    //cout << "Distance from " << (s[i]-'A') << " to " << val << " is " << dist[s[i]-'A'][val] << endl;
                    if(dist[s[i] - 'A'][val] != large){
                        temp += dist[s[i] - 'A'][val];
                    }
                    else{
                        f = false;
                        break;
                    }
                }
                if(f){
                    y = true;
                    ans = min(ans, temp);
                    //cout << "Temp was " << temp << endl;
                }
                //cout << "Ending for " << val << endl;
            }
            //cout << ans << endl;
            if(!y){
                cout << -1 << endl;
            }
            else{
                cout << ans << endl;
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