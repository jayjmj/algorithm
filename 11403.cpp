/*
#include <cstdio>

int d[101][101];
const int inf = 100000000;

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			scanf("%d",&d[i][j]);
			if(d[i][j] == 0) d[i][j] = inf;
		}
	}

	for(int k = 1 ; k <= N ; k++){
		for(int i = 1 ; i <= N ; i++){
			for(int j = 1 ; j <= N ; j++){
				if(d[i][k] != inf && d[k][j] != inf && d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k]+d[k][j];
				}
			}
		}
	}

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			if(d[i][j] == inf) printf("0 ");
			else printf("1 ");
		}
		printf("\n");
	}

	return 0;
}
*/
