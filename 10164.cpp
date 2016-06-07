/*
#include <cstdio>

int D[226][226];

int main(){

	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);

	int size = N*M;
	for(int i = 1 ; i <= size ; i++){
		for(int j = 1 ; j <= size ; j++){
			if(i <= j && (i-1)%M <= (j-1)%M){
				if(i == j) D[i][j] = 1;
				else{
					if((i-1)%M < (j-1)%M) D[i][j] += D[i][j-1];
					if((i-1)/M < (j-1)/M) D[i][j] += D[i][j-M];
				}
			}
		}
	}

	if(K==0) printf("%d\n",D[1][size]);
	else printf("%d\n",D[1][K]*D[K][size]);

	return 0;
}
*/
