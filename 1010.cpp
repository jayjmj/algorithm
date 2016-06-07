/*#include <cstdio>

int main(){
	int T;
	scanf("%d",&T);

	for(int test_case = 1 ; test_case <= T ; test_case++){
		int N,M;
		scanf("%d %d",&N,&M);

		int temp;
		if(M>N){
			temp = N;
			N = M;
			M = temp;
		}
		if(N/2 < M) M = N-M;

		int result = 1;
		for(int i = 1; i <= M ; i++){
			result = result*N/i;
			N--;
		}

		printf("%d\n",result);
	}

	return 0;
}*/
