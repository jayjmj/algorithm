/*
#include <cstdio>

int fibo[41];

int f(int n){
	if(fibo[n]>0) return fibo[n];

	if(n == 0 || n == 1) return fibo[n] = 1;
	else if(n == 2) return fibo[n] = 2;
	else return fibo[n] = f(n-1) + f(n-2);
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	int ans = 1;
	int prev = 0;
	for(int i = 0 ; i < M ; i++){
		int num;
		scanf("%d",&num);

		ans *= f(num-prev-1);
		prev = num;
	}
	ans *= f(N-prev);

	printf("%d\n",ans);

	return 0;
}
*/
