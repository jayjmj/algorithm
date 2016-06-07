/*#include <cstdio>

int d[21][21];
bool c[21][21];

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1; j <= N ; j++){
			scanf("%d",&d[i][j]);
			c[i][j] = true;
		}
	}

	for(int k = 1 ; k <= N ; k++){
		for(int i = 1; i <= N ; i++){
			for(int j = 1 ; j <= N ; j++){
				if(i != j && j != k && k != i && d[i][j] >= d[i][k]+d[k][j]){
					if(d[i][j] > d[i][k]+d[k][j]){
						printf("-1");
						return 1;
					}
					else{
						c[i][j] = false;
					}
				}
			}
		}
	}

	int ans = 0;
	for(int i = 1 ; i <= N ; i++){
		for(int j = i+1; j <= N ; j++){
			if(c[i][j]) ans+=d[i][j];
		}
	}

	printf("%d",ans);

	return 0;
}*/
