
/*
#include <cstdio>
#include <cstring>

int D[10001];

int coin[20];

int main(){
	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		memset(D,0,sizeof(D));
		memset(coin,0,sizeof(coin));

		int N;
		scanf("%d",&N);

		for(int i = 0 ; i < N ; i++) scanf("%d",&coin[i]);

		int aim;
		scanf("%d",&aim);

		for(int i = 0 ; i < N ; i++) D[0] = 1;
		for(int i = 0 ; i < N ; i++){
			for(int j = 1 ; j <= aim ; j++){
				if(j-coin[i]>=0) 	D[j] += D[j-coin[i]];
			}
		}

		printf("%d\n",D[aim]);
	}


	return 0;
}
*/


/*#include <cstdio>
#include <cstring>

int D[10001][20];

int coin[20];

int main(){
	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		memset(D,0,sizeof(D));
		memset(coin,0,sizeof(coin));

		int N;
		scanf("%d",&N);

		for(int i = 0 ; i < N ; i++) scanf("%d",&coin[i]);

		int aim;
		scanf("%d",&aim);

		for(int i = 0 ; i < N ; i++) D[0][i] = 1;
		for(int i = 0 ; i < N ; i++){
			for(int j = 1 ; j <= aim ; j++){
				for(int k = 0 ; k <= i ; k ++){
					if(j-coin[k]>=0) 	D[j][i] += D[j-coin[k]][k];
				}
			}
		}

		printf("%d\n",D[aim][N-1]);
	}


	return 0;
}*/
