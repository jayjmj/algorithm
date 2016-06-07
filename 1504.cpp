/*#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

typedef struct edge{
	int to;
	int cost;
	edge(int to, int cost): to(to),cost(cost){

	}
} Edge;

const int inf = 100000000;
int D[801];
int C[801];
vector<Edge> vertex[801];

void dijkstra(int start, int N){

	for(int i = 1 ; i <= N ; i++){
		D[i] = inf;
		C[i] = false;
	}

	D[start] = 0;
	C[start] = true;
	int city = start;
	for(int i = 0 ; i < N-1 ; i++){
		int size = vertex[city].size();

		for(int j = 0 ; j < size ; j++){
			int from = city;
			int to = vertex[city][j].to;
			int cost = vertex[city][j].cost;

			if(D[from] != inf && D[to] > D[from]+cost){
				D[to] = D[from]+cost;
			}
		}

		int minCost = inf+1;
		for(int j = 1; j <= N ; j++){
			if(!C[j] && minCost > D[j]){
				minCost = D[j];
				city = j;
			}
		}
		C[city] = true;
	}
}

int main(){
	int N,E;
	scanf("%d %d",&N,&E);

	int from,to,cost;
	for(int i = 0 ; i < E ; i++){
		scanf("%d %d %d",&from,&to,&cost);
		vertex[from].push_back(edge(to,cost));
		vertex[to].push_back(edge(from,cost));
	}

	int via1,via2;
	scanf("%d %d",&via1,&via2);

	int minDirCost = 0,minDirCost2 = 0;
	dijkstra(1,N);
	minDirCost += D[via1]; minDirCost2 += D[via2];
	dijkstra(via1,N);
	minDirCost += D[via2]; minDirCost2 += D[N];
	dijkstra(via2,N);
	minDirCost += D[N]; minDirCost2 += D[via1];

	if(minDirCost > minDirCost2) minDirCost = minDirCost2;
	if(minDirCost >= inf) printf("-1\n");
	else printf("%d\n",minDirCost);

	return 0;
}*/
