/*
#include <cstdio>

int color[3];
long long fac[11];

int factorial(int n){
	if(n > 10 || n < 0) return -1;
	if(fac[n] != 0) return fac[n];

	fac[0] = 1;
	for(int i = 1 ; i <= n ; i++){
		fac[i] = fac[i-1]*i;
	}
	return fac[n];
}

long long countCase(int N, int r, int g, int b){

	if(r < 0 || g < 0 || b < 0) return 0;
	if(N == 1){
		int cnt = 0;
		if(r >= 1) cnt++;
		if(g >= 1) cnt++;
		if(b >= 1) cnt++;

		return cnt;
	}

	long long cnt = 0;
	if(N%3==0){
		int m = N/3;
		long long permutCase = factorial(N)/factorial(m)/factorial(m)/factorial(m);
		cnt += countCase(N-1,r-m,g-m,b-m)*permutCase;
	}

	if(N%2==0){
		int m = N/2;
		long long permutCase = factorial(N)/factorial(m)/factorial(m);
		cnt += countCase(N-1,r-m,g-m,b)*permutCase;
		cnt += countCase(N-1,r,g-m,b-m)*permutCase;
		cnt += countCase(N-1,r-m,g,b-m)*permutCase;
	}

	if(N%1==0){
		cnt += countCase(N-1,r-N,g,b);
		cnt += countCase(N-1,r,g-N,b);
		cnt += countCase(N-1,r,g,b-N);
	}

	return cnt;
}

int main(){

	int N;
	scanf("%d",&N);

	int cnt = 0;
	for(int i = 0 ; i < 3 ; i++){
		scanf("%d",&color[i]);
		cnt += color[i];
	}

	if(cnt < N*(N+1)/2){
		printf("0\n");
		return 0;
	}

	printf("%lld\n",countCase(N,color[0],color[1],color[2]));

	return 0;
}
*/
