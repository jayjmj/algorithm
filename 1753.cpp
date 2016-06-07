/*#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

typedef struct edge{
	int to, cost;
	edge(int to, int cost):to(to),cost(cost){}
} Edge;

vector<Edge> v[20001];

typedef struct distance{
	int vertex;
	int dist;
	distance(int vertex,int dist):vertex(vertex),dist(dist){}
	bool operator > (const struct distance &a) const{
		return dist > a.dist;
	}
} Distance;

const int inf = 100000000;
int D[20001];
bool C[20001];

int main(){

	int V,E;
	scanf("%d %d",&V,&E);

	int K;
	scanf("%d",&K);

	int from,to,cost;
	for(int i = 0 ; i < E ; i++){
		scanf("%d %d %d",&from,&to,&cost);

		v[from].push_back(Edge(to,cost));
	}

	for(int i = 1 ; i <= V ; i++){
		D[i] = inf;
		C[i] = false;
	}

	priority_queue<Distance,vector<Distance>,greater<Distance> > q;
	D[K] = 0;
	q.push(Distance(K,0));
	for(int i = 1 ; i <= V ; i++){
		int c;
		while(!q.empty()){
			Distance x = q.top();
			q.pop();

			if(C[x.vertex] != true){
				c = x.vertex;
				break;
			}
		}
		C[c] = true;

		int size = v[c].size();
		for(int j = 0 ; j < size; j++){
			int from = c;
			int to = v[c][j].to;
			int cost = v[c][j].cost;

			if(D[to] > D[from]+cost){
				D[to] = D[from]+cost;
				q.push(Distance(to,D[to]));
			}
		}
	}

	for(int i = 1 ; i <= V ; i++){
		if(D[i] == inf){
			printf("INF\n");
		}
		else{
			printf("%d\n",D[i]);
		}
	}



	return 0;
}*/
