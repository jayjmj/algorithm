/*
#include <cstdio>

int A[21];

int main(){

	int N,K;
	scanf("%d %d",&N,&K);

	char c;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d%c",&A[i],&c);
	}

	for(int i = 1 ; i <= K ; i++){
		for(int j = 1 ; j <= N-i ; j++){
			A[j] = A[j+1] - A[j];
		}
	}

	for(int i = 1; i <= N-K ; i++){
		printf("%d",A[i]);
		if(i != N-K) printf(",");
	}

	return 0;
}
*/
