#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, m, q, u, v, a, b; cin >> n >> m >> q;
	vector<int> x[n];
	queue<int> qq;
	map<int, int> frozen;
	
	for(int i=0; i<m; i++){
		cin >> u >> v;
		x[u-1].push_back(v-1);
		x[v-1].push_back(u-1);
	}
	
	while(q--){
		cin >> a >> b;
		if(a == 1){
			if(frozen[b-1] == 0){
				qq.push(b-1);
				frozen[b-1] = 1;
			}
		}
		
		else if(a == 2){
			for(int i=0; i<b and !qq.empty(); i++){
				int temp_sz = qq.size();
				while(temp_sz > 0){
					int rr = qq.front(); qq.pop();
					
					for(auto j:x[rr]){
						if(frozen[j] == 0){
							frozen[j] = 1;
							qq.push(j);
						}
					}
					
					temp_sz -= 1;
				}
			}
		}
		
		else{
			if(frozen[b-1] == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	
	return 0;
}