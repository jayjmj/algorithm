/*#include <cstdio>

int d[101][101];
const int inf = 100000000;

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			d[i][j] = inf;
		}
	}

	int from,to,cost;
	for(int i = 0 ; i < m ; i++){
		scanf("%d %d %d",&from,&to,&cost);
		if(d[from][to] > cost) d[from][to] = cost;
	}

	for(int k = 1; k <= n ; k++){
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i != j && d[i][k] != inf && d[k][j] != inf && d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(d[i][j] == inf) printf("0 ");
			else printf("%d ",d[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/
