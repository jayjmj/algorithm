/*#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int inf = 1000000000;
int D[501];

typedef struct edge{
	int from,to,cost;
} Edge;

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	vector<Edge> v(M);
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d %d",&v[i].from,&v[i].to,&v[i].cost);
	}

	for(int i = 1; i <= N ; i++){
		D[i] = inf;
	}

	D[1] = 0;
	bool isCycle = false;
	int from,to,cost;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 0 ; j < M ; j++){
			from = v[j].from;
			to = v[j].to;
			cost = v[j].cost;

			if(D[from] != inf && D[from] + cost < D[to]){
				D[to] = D[from] + cost;
				if(i == N) isCycle = true;
			}
		}
	}

	if(isCycle) printf("-1\n");
	else{
		for(int i = 2 ; i <= N ; i++ ){
			if(D[i] == inf) printf("-1\n");
			else printf("%d\n",D[i]);
		}
	}

	return 0;
}*/
