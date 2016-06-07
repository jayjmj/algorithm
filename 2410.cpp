/*
#include <cstdio>

int D[1000001];
const int mod = 1000000000;

int main(){

	int N;
	scanf("%d",&N);


	for(int j = 0 ; (1<<j) <= N ; j++){
		for(int i = 0 ; i <= N ; i++){
			if(i == 0) D[i] = 1;
			else if(i-(1<<j) >= 0){
				D[i] = (D[i] + D[i-(1<<j)])%mod;
			}
		}
	}

	printf("%d\n",D[N]);

	return 0;
}
*/
