
// directed graph에서 cycle찾기.
// 두 노드 사이에 여러개의 엣지가 있는 경우가 있음 => 중복되는 걸 cost로 전환하기
// 1 -> 2 의 방향이 아니지만, 1로 시작하는 길 중에 사이클이 있을 수 있음.
// 풀 시간이 없으므로, 킵해두고 나중에!

/*
#include <cstdio>
#include <vector>

using namespace std;

const int mod = 1000000000;

vector<int> v[10001];
bool chk[10001];
long long count[10001];
bool haveCycle;

void dfs(int s){

	count[s]++;
	int size = v[s].size();
	for(int i = 0 ; i < size ; i++){
		int next = v[s][i];
		if(!chk[next]){
			chk[next] = true;
			dfs(next);
			chk[next] = false;
		}
		else{
			haveCycle = true;
		}
		if(haveCycle) return;
	}

}

int main(){

	//freopen("input/bicikli.in.3","r",stdin);
	//freopen("output/bicikli.out."+t,"w",stdout);

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 0 ; i < m ; i++){
		int from,to;
		scanf("%d %d",&from,&to);
		v[from].push_back(to);
	}

	int start = 1;
	chk[start] = true;
	dfs(start);

	return 0;
}
*/
