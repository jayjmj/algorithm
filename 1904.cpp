/*
#include <cstdio>

const int mod = 15746;

int D[1000001];

int main(){
	int N;
	scanf("%d",&N);

	D[0] = 1;
	for(int i = 1 ; i <= N ; i++){
		if(i == 1) D[1] = 1;
		else D[i] = (D[i-1] + D[i-2])%mod;
	}

	printf("%d",D[N]);

	return 0;
}
*/
