/*
#include <cstdio>

int D[2001][2001][3];
int A[2001];
int B[2001];

int max(int a, int b){return a>b?a:b;}

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++) scanf("%d",&A[i]);
	for(int i = 1 ; i <= N ; i++) scanf("%d",&B[i]);


	int m = 0;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			int num = max(D[i-1][j][0],max(D[i][j-1][1],D[i-1][j-1][2]));
			if(num > m) m = num;
			if(num != -1){
				D[i][j][0] = num;
				if(A[i] > B[j]){
					D[i][j][1] = num + B[j];
					if(m < D[i][j][1]) m = D[i][j][1];
				}
				else D[i][j][1] = -1;
				D[i][j][2] = num;
			}
			else{
				D[i][j][0] = -1;
				D[i][j][1] = -1;
				D[i][j][2] = -1;
			}

		}
	}


	printf("%d\n",m);

	return 0;
}
*/
