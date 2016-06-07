/*
#include <cstdio>

int A[10001];

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	for(int i = 1; i <= N ; i++) scanf("%d",&A[i]);

	int count = 0;
	int j = 1;
	int sum = 0;
	for(int i = 1; i <= N ; i++){
		sum += A[i];
		while(sum >= M){
			if(sum == M) count++;
			sum -= A[j];
			j++;
		}
	}

	printf("%d\n",count);

	return 0;
}
*/


/*
#include <cstdio>

int A[10001];
int S[10001];

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	for(int i = 1; i <= N ; i++){
		scanf("%d",&A[i]);
		S[i] = S[i-1] + A[i];
	}

	int count = 0;
	int j = 0;
	for(int i = 1; i <= N ; i++){
		while(S[i]-S[j] >= M){
			if(S[i]-S[j] == M) count++;
			j++;
		}
	}

	printf("%d\n",count);

	return 0;
}
*/
