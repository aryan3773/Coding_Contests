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
    for(int u=1; u<=t; u++){
        cout << "Case #" << u << ": ";
        int n; cin >> n;
        vector<int> coins(n, 0);
        for(int i=0; i<n; i++){
            cin >> coins[i];
        }

        vector<int> x[n], one;
        for(int i=0; i<n-1; i++){
            int a, b; cin >> a >> b;
            if(a != 1 and b != 1){
                x[a-1].push_back(b-1);
                x[b-1].push_back(a-1);
            }

            if(a == 1){
                one.push_back(b-1);
            }
            if(b == 1){
                one.push_back(a-1);
            }
        }

        if(n == 1){
            cout << coins[0] << endl;
        }

        else{
            vector<int> maxi;

            for(auto children: one){
                vector<int> val;
                if(x[children].size() != 0){
                    queue<pair<int, int>> bfs;
                    bfs.push({children, coins[children]});
                    
                    vector<bool> visit(n, false);
                    visit[children] = true;
                
                    while(!bfs.empty()){
                        int ww = bfs.size();
                        for(int i=0; i<ww; i++){
                            auto temp = bfs.front();
                            bfs.pop();

                            int node = temp.first, sum = temp.second;
                            if(x[node].size() == 1 and node != children){
                                val.push_back(sum);
                            }
                            else{
                                for(auto neighbours:x[node]){
                                    if(!visit[neighbours]){
                                        visit[neighbours] = true;
                                        bfs.push({neighbours, sum + coins[neighbours]});
                                    }
                                }
                            }
                        }
                    }
                }

                else{
                    val.push_back(coins[children]);
                }

                maxi.push_back(*max_element(val.begin(), val.end()));
            }

            sort(maxi.begin(), maxi.end());
            /*cout << "Final elements " << endl;
            for(auto i:maxi){
                cout << i << " ";
            }
            cout << endl;*/
            int y = maxi.size();

            if(y == 1){
                cout << maxi[0] + coins[0] << endl;
            }

            else{
                cout << maxi[y-1] + maxi[y-2] + coins[0] << endl;
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