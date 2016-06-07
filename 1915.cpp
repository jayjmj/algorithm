/*
#include <cstdio>

int D[1001][1001];
int A[1001][1001];

int min(int a, int b){return a<b?a:b;}

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 1; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			scanf("%1d",&A[i][j]);
		}
	}

	int maxArea = 0;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			if(i == 1 || j == 1){
				D[i][j] = A[i][j];
			}
			else if(A[i][j] == 1){
				D[i][j] = min(min(D[i-1][j],D[i][j-1]),D[i-1][j-1]) + 1;
			}
			if(maxArea < D[i][j]) maxArea = D[i][j];
		}
	}

	printf("%d\n",maxArea*maxArea);

	return 0;
}
*/
