/*
#include <cstdio>

int A[10];

int countCoin(int money,int N){

	int count = 0;
	for(int i = N-1 ; i >= 0 ; i--){
		count += money/A[i];
		money = money%A[i];
	}

	return count;
}

int main(){

	int N,K;
	scanf("%d %d",&N,&K);


	for(int i = 0 ; i < N ; i++){
		scanf("%d",&A[i]);
	}

	printf("%d\n",countCoin(K,N));

	return 0;
}
*/
