/*
#include <cstdio>

int max(int a, int b){ return a>b?a:b;}
int D[501][501];
const int inf = 1000000000;

int main(){

	int N,K;
	scanf("%d %d",&N,&K);

	for(int j = 1 ; j <= K ; j++){
		for(int i = 1 ; i <= N ; i++){
			if(j == 1) D[i][j] = i;
			else if(i == 1) D[i][j] = 1;
			else{
				int min = inf;
				for(int k = 1 ; k <= i ; k++){
					int m = max(D[i-k][j],D[k-1][j-1])+1;
					if(min > m) min = m;
				}
				D[i][j] = min;
			}
		}
	}

	printf("%d\n",D[N][K]);

	return 0;
}
*/
