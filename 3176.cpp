/*
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

typedef struct edge{
	int to,cost;
	edge(int _to,int _cost){ to=_to; cost=_cost;}
} Edge;
vector<Edge> edges[100001];

bool check[100001];
int depth[100001];
int parent[100001];
int cost[100001];

int p[100001][18];
int minLen[100001][18];
int maxLen[100001][18];

int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}

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

	for(int j = 0; (1<<j) < N ; j++){
		for(int i = 1 ; i <= N ; i++){
			if(j == 0){
				p[i][j] = parent[i];
				minLen[i][j] = cost[i];
				maxLen[i][j] = cost[i];
			}
			else{
				p[i][j] = p[p[i][j-1]][j-1];
				minLen[i][j] = min(minLen[i][j-1],minLen[p[i][j-1]][j-1]);
				maxLen[i][j] = max(maxLen[i][j-1],maxLen[p[i][j-1]][j-1]);
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

		int minDist = 1000000, maxDist = 0;
		while(depth[node1] != depth[node2]){
			int square;
			if(depth[node1] > depth[node2]){
				int gap = depth[node1]-depth[node2];
				for(square = 0 ; (1<<square) <= gap ; square++);
				minDist = min(minDist,minLen[node1][square-1]);
				maxDist = max(maxDist,maxLen[node1][square-1]);
				node1 = p[node1][square-1];
			}
			else{
				int gap = depth[node2]-depth[node1];
				for(square = 0 ; (1<<square) <= gap ; square++);
				minDist = min(minDist,minLen[node2][square-1]);
				maxDist = max(maxDist,maxLen[node2][square-1]);
				node2 = p[node2][square-1];
			}
		}

		if(node1 != node2){
			int square;
			for(square = 0 ; (1<<square) <= depth[node1] ; square++);
			for(int j = square-1 ; j >= 0 ; j--){
				if(p[node1][j] != 0 && p[node1][j] != p[node2][j]){
					minDist = min(min(minDist,minLen[node1][j]),minLen[node2][j]);
					maxDist = max(max(maxDist,maxLen[node1][j]),maxLen[node2][j]);
					node1 = p[node1][j];
					node2 = p[node2][j];
				}
			}
			minDist = min(min(minDist,cost[node1]),cost[node2]);
			maxDist = max(max(maxDist,cost[node1]),cost[node2]);
			node1 = parent[node1];
		}

		printf("%d %d\n",minDist,maxDist);
	}


	return 0;
}
*/
