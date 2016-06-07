/*
#include <cstdio>

int D[201][201];
int A[201];

int min(int a, int b){return a<b?a:b;}

int main(){

	int N,K;
	scanf("%d %d",&N,&K);

	for(int i = 1 ; i <= N ; i++) scanf("%d",&A[i]);

	for(int j = 0 ; j < N ; j++){
		for(int i = 1; i <= N ; i++){
			if(i+j <= N){
				if(j == 0) D[i][i+j] = 0;
				else{
					if(A[i] == A[i+1] || A[i] == A[i+j]) D[i][i+j] = D[i+1][i+j];
					else D[i][i+j] = D[i+1][i+j]+1;

					if(A[i+j] == A[i+j-1] || A[i] == A[i+j]) D[i][i+j] = min(D[i][i+j],D[i][i+j-1]);
					else D[i][i+j] = min(D[i][i+j],D[i+1][i+j]+1);
				}
			}
		}
	}

	printf("%d\n",D[1][N]);

	return 0;
}
*/
