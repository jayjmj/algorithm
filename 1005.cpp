
/*
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int cost[1001];
int ind[1001];
int sum[1001];
vector<int> v[1001];

int max(int a, int b){ return a>b?a:b;}

int main(){

	int T;
	scanf("%d",&T);

	while(T--){
		int N,K;
		scanf("%d %d",&N,&K);

		for(int i = 1 ; i <= N ; i++) scanf("%d",&cost[i]);

		int s,e;
		for(int i = 1 ; i <= K ; i++){
			scanf("%d %d",&s,&e);
			v[s].push_back(e);
			ind[e]++;
		}

		int W;
		scanf("%d",&W);

		queue<int> q;
		for(int i = 1 ; i <= N ; i++){
			if(ind[i] == 0){
				q.push(i);
				sum[i] = cost[i];
			}
		}

		bool success = false;
		while(!q.empty()){

			int x = q.front(); q.pop();

			int size = v[x].size();
			for(int i = 0 ; i < size ; i++){
				int y = v[x][i];

				ind[y]--;
				sum[y] = max(sum[x]+cost[y],sum[y]);

				if(ind[y] == 0){
					q.push(y);

					if(y == W){
						success = true;
						break;
					}
				}
			}

			if(success) break;
		}

		printf("%d\n",sum[W]);

		memset(cost,0,sizeof(cost));
		memset(ind,0,sizeof(ind));
		memset(sum,0,sizeof(sum));
		for(int i = 1 ; i <= N ; i++) v[i].clear();
	}


	return 0;
}
*/
