/*
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

typedef struct edge{
	int to,cost;
	edge(int _to, int _cost){ to=_to, cost=_cost;}
} Edge;
vector<Edge> edges[40001];

bool check[40001];
int depth[40001];
int parent[40001];
int cost[40001];

int main(){

	int N;
	scanf("%d",&N);

	int s,e,w;
	for(int i = 0 ; i < N-1; i++){
		scanf("%d %d %d",&s,&e,&w);
		edges[s].push_back(Edge(e,w));
		edges[e].push_back(Edge(s,w));
	}

	//bfs
	int start = 1;
	queue<int> q;
	q.push(start);
	check[start] = true;
	depth[start] = 0;
	parent[start] = 0;
	cost[start] = 0;

	while(!q.empty()){
		int x = q.front();
		q.pop();

		int size = edges[x].size();
		for(int i = 0 ; i < size ; i++){
			int y = edges[x][i].to;
			if(!check[y]){
				q.push(y);
				check[y] = true;
				depth[y] = depth[x]+1;
				parent[y] = x;
				cost[y] = edges[x][i].cost;
			}
		}
	}

	//lca
	int M;
	scanf("%d",&M);
	for(int i = 0 ; i < M ; i++){
		int dist = 0;
		int node1,node2;
		scanf("%d %d",&node1,&node2);

		while(depth[node1] != depth[node2]){
			if(depth[node1] > depth[node2]){
				dist += cost[node1];
				node1 = parent[node1];
			}
			else{
				dist += cost[node2];
				node2 = parent[node2];
			}
		}

		while(node1 != node2){
			dist += cost[node1] + cost[node2];
			node1 = parent[node1];
			node2 = parent[node2];
		}

		printf("%d\n",dist);
	}


	return 0;
}
*/
