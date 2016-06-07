/*
#include <cstdio>

int D[501][501];
int A[501][501];

int max(int a,int b){ return a>b?a:b;}

int main(){

	int n;
	scanf("%d",&n);


	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= i ; j++){
			scanf("%d",&A[i][j]);
			D[i][j] = max(D[i-1][j],D[i-1][j-1]) + A[i][j];
		}
	}

	int max = 0;
	for(int i = 1; i <= n ; i++) if(max < D[n][i]) max = D[n][i];

	printf("%d\n",max);

	return 0;
}
*/
