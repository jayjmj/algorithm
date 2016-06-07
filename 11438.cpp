/*#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

typedef struct edge{
	int to,cost;
	edge(int _to){ to=_to;}
} Edge;
vector<Edge> edges[100001];

bool check[100001];
int depth[100001];
int parent[100001];
int p[100001][18];

int main(){

	int N;
	scanf("%d",&N);

	int s,e;
	for(int i = 0 ; i < N-1; i++){
		scanf("%d %d",&s,&e);
		edges[s].push_back(Edge(e));
		edges[e].push_back(Edge(s));
	}

	//bfs
	int start = 1;
	queue<int> q;
	q.push(start);
	check[start] = true;
	depth[start] = 0;
	parent[start] = 0;

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
			}
		}
	}

	for(int j = 0; (1<<j) < N ; j++){
		for(int i = 1 ; i <= N ; i++){
			if(j == 0) p[i][j] = parent[i];
			else{
				p[i][j] = p[p[i][j-1]][j-1];
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
			int square;
			if(depth[node1] > depth[node2]){
				int gap = depth[node1]-depth[node2];
				for(square = 0 ; (1<<square) <= gap ; square++);
				node1 = p[node1][square-1];
			}
			else{
				int gap = depth[node2]-depth[node1];
				for(square = 0 ; (1<<square) <= gap ; square++);
				node2 = p[node2][square-1];
			}
		}

		if(node1 != node2){
			int square;
			for(square = 0 ; (1<<square) <= depth[node1] ; square++);
			for(int j = square-1 ; j >= 0 ; j--){
				if(p[node1][j] != 0 && p[node1][j] != p[node2][j]){
					node1 = p[node1][j];
					node2 = p[node2][j];
				}
			}
			node1 = parent[node1];
		}

		printf("%d\n",node1);
	}


	return 0;
}*/
