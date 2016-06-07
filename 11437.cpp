/*#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> e[50001];

bool c[50001];
int p[50001];
int d[50001];

int bfs(int src){

	queue<int> q;
	q.push(src);
	c[src] = true;
	d[src] = 0;

	int depth = 0;
	while(!q.empty()){
		depth++;

		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			int x = q.front();
			q.pop();

			int size = e[x].size();
			for(int j = 0 ; j < size ; j++){
				int y = e[x][j];
				if(!c[y]){
					q.push(y);
					c[y] = true;
					d[y] = depth;
					p[y] = x;
				}
			}
		}
	}
}

int main(){

	int N;
	scanf("%d",&N);
	int from,to;
	for(int i = 0 ; i < N-1 ; i++){
		scanf("%d %d",&from,&to);

		e[from].push_back(to);
		e[to].push_back(from);
	}

	int start = 1;
	bfs(start);

	int M;
	scanf("%d",&M);
	int node1, node2;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d",&node1,&node2);

		while(d[node1] != d[node2]){
			if(d[node1] > d[node2]) node1 = p[node1];
			else node2 = p[node2];
		}

		while( node1 != node2){
			node1 = p[node1];
			node2 = p[node2];
		}

		printf("%d\n",node1);
	}

	return 0;
}*/
