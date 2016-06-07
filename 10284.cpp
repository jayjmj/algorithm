/*
#include <cstdio>
#include <cstring>

int D[1501][1501];
int A[1501];

int main(){

	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		int n;
		scanf("%d",&n);

		int total = 0;
		for(int i = 1 ; i <= n ; i++){
			scanf("%d",&A[i]);
			total += A[i];
		}

		memset(D,0,sizeof(D));
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i == 1){
								D[i] = total - A[i];
							}
							else{
								D[i] = D[i-1] - A[i];
								for(int k = 1 ; k <= i-1 ; k++){
									D[i] += A[k];
								}
							}
			}

		}

		int min = 1000000000;
		for(int i = 1; i <= n ; i++){
			if(min > D[i]) min = D[i];
		}
		printf("%d\n",min);
	}


	return 0;
}
*/

