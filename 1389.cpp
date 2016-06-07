/*#include <cstdio>

int r[101][101];
const int inf = 100000000;

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			if(i == j) r[i][j] = 0;
			else r[i][j] = inf;
		}
	}

	int from,to;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d",&from,&to);
		r[from][to] = 1;
		r[to][from] = 1;
	}

	for(int k = 1 ; k <= N; k++){
		for(int i = 1 ; i <= N ; i++){
			for(int j = 1 ; j <= N ; j++){
				if(r[i][k] != inf && r[k][j] != inf && r[i][j] > r[i][k] + r[k][j]){
					r[i][j] = r[i][k]+r[k][j];
				}
			}
		}
	}

	int ans;
	int min = inf+1;
	for(int i = 1; i <= N ; i++){
		int count = 0;
		for(int j = 1 ; j <= N ; j++){
			if(i != j) count += r[i][j];
		}
		if(min > count){
			min = count;
			ans = i;
		}
	}

	printf("%d\n",ans);

	return 0;
}*/
