/*
#include <cstdio>
#include <vector>

using namespace std;

bool chk[101];
vector<int> v[101];

int dfs(int s){
	int ret = 1;
	int size = v[s].size();
	for(int i = 0 ; i < size ; i++){
		int t = v[s][i];
		if(!chk[t]){
			chk[t] = true;
			ret += dfs(t);
		}
	}
	return ret;
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 0 ; i < m ; i++){
		int s,t;
		scanf("%d %d",&s,&t);
		v[s].push_back(t);
		v[t].push_back(s);
	}

	chk[1] = true;
	int ans = dfs(1);

	printf("%d\n",ans-1);

	return 0;
}
*/
