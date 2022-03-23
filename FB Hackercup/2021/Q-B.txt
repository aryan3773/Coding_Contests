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
        int n; cin >> n;
        string s, temp;
        vector<string> x;
        bool f = false;
        int mini = 1e6, ans = 0, r=0;
        for(int i=0; i<n; i++){
            cin >> s;
            x.push_back(s);
        }
        vector<int> values(n+1);
        map<pair<int, int>, int> row, col;

        for(int i=0; i<n; i++){
            temp = x[i];
            //cout << "String considered is " << temp << endl;
            int ct = count(temp.begin(), temp.end(), 'O');
            if(ct == 0){
                f = true;
                int ct1 = count(temp.begin(), temp.end(), '.');
                mini = min(mini, ct1);
                values[ct1] += 1;
            } 
        }

        for(int i=0; i<n; i++){
            temp = "";
            for(int j=0; j<n; j++){
                temp += x[j][i];
            }
            //cout << "String 1 considered is " << temp << endl;
            int ct = count(temp.begin(), temp.end(), 'O');
            if(ct == 0){
                f = true;
                int ct1 = count(temp.begin(), temp.end(), '.');
                mini = min(mini, ct1);
                values[ct1] += 1;
            }        
        }

        if(!f){
            cout << "Impossible" << endl;
        }

        else{
            if(mini == 1){
                int p = 0;
                bool z = false;
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        int q=0, w=0, qq=0, ww=0;
                        if(x[i][j] == '.'){
                            for(int k=0; k<n; k++){
                                if(x[i][k] == '.'){
                                    q += 1;
                                }
                                if(x[i][k] == 'O'){
                                    qq += 1;
                                }
                            }

                            for(int k=0; k<n; k++){
                                if(x[k][j] == '.'){
                                    w += 1;
                                }
                                if(x[k][j] == 'O'){
                                    ww += 1;
                                }
                            }
                        }
                        //cout << q << " " << qq << " " << w << " " << ww << endl;
                        if(q == 1 and w == 1 and qq == 0 and ww == 0){
                            p += 1;
                            //cout << "For " << i << " " << j << endl;
                            z = true;
                        }
                    }
                }
                cout << mini << " " << values[mini] - p << endl;
            }

            else{
                cout << mini << " " << values[mini] << endl;
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