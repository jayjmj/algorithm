/*#include <cstdio>

bool D[2001][2001];
int A[2001];

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&A[i]);
	}

	for(int i = 0 ; i < N ; i++){
		for(int j = 1 ; j <= N ; j++){
			if(i+j <= N){
				if(i == 0){
					D[j][j+i] = true;
				}
				else if(i == 1){
					D[j][j+i] = (A[j] == A[j+i]);
				}
				else{
					D[j][j+i] = (A[j] == A[j+i]) && D[j+1][j+i-1];
				}
			}
		}
	}

	int M;
	scanf("%d",&M);

	int S,E,temp;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d",&S,&E);

		if(S>E){
			temp = S;
			S = E;
			E = temp;
		}

		if(D[S][E]) printf("1\n");
		else printf("0\n");
	}

	return 0;
}*/

