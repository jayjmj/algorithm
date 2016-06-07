/*
#include <cstdio>

bool prime[101];

int main(){

	int N;
	scanf("%d",&N);

	prime[1] = true;
	for(int i = 2 ; i*i <= 100 ; i++){
		int n = 2;
		while(i*n <= 100){
			prime[i*n] = true;
			n++;
		}
	}

	int cnt = 0;
	int num;
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&num);

		if(!prime[num]) cnt++;
	}

	printf("%d",cnt);

	return 0;
}
*/
