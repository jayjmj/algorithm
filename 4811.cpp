/*
#include <cstdio>

long long D[31];

long long f(int n){
	if(D[n] > 0) return D[n];
	else {
		for(int i = 0 ; i < n ; i++){
			D[n] += f(i)*f(n-1-i);
		}
	}
	return D[n];
}

int main(){
	int N;
	D[0]=1,D[1]=1;
	while(scanf("%d",&N) == 1 && N != 0){
		printf("%lld\n",f(N));
	}
	return 0;
}
*/
