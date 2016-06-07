/*
#include <cstdio>

long long fac[11] = {1,1,2,6,24,120,720,5040,40320,362880,3628800};
long long D[101][101][101];

long long countCase(int N, int r, int g, int b){
	if(r < 0 || g < 0 || b < 0) return 0;

	if(D[r][g][b] != 0) return D[r][g][b];

	if(N < 1) return 1;

	long long cnt = 0;
	if(N%3==0){
		int m = N/3;
		long long permutCase = fac[N]/fac[m]/fac[m]/fac[m];
		cnt += countCase(N-1,r-m,g-m,b-m)*permutCase;
	}

	if(N%2==0){
		int m = N/2;
		long long permutCase = fac[N]/fac[m]/fac[m];
		cnt += countCase(N-1,r-m,g-m,b)*permutCase;
		cnt += countCase(N-1,r,g-m,b-m)*permutCase;
		cnt += countCase(N-1,r-m,g,b-m)*permutCase;
	}

	if(N%1==0){
		cnt += countCase(N-1,r-N,g,b);
		cnt += countCase(N-1,r,g-N,b);
		cnt += countCase(N-1,r,g,b-N);
	}

	D[r][g][b] = cnt;

	return cnt;
}

int main(){

	int N;
	int r,g,b;
	scanf("%d %d %d %d",&N,&r,&g,&b);

	if(r+g+b < N*(N+1)/2){
		printf("0\n");
		return 0;
	}

	printf("%lld\n",countCase(N,r,g,b));

	return 0;
}
*/
