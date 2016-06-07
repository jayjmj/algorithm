/*
#include <cstdio>
#include <cmath>

bool pri[1000001];

int main(){

	int M,N;
	scanf("%d %d",&M,&N);

	pri[1] = true;
	int limit = sqrt(N);
	for(int i = 2 ; i <= limit ; i++){
		int n = 2;
		while(i*n <= N){
			pri[i*n] = true;
			n++;
		}
	}

	for(int i = M ; i <= N ; i++){
		if(!pri[i]) printf("%d\n",i);
	}


	return 0;
}
*/
