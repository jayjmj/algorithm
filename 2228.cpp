/*
// DP는 초기화를 항상 조심한다!! D[0][~~] 과 D[~~][0] 부분 때문에 전체가 달라짐..
// 이전에 풀었던 코드가 왜 틀린지 확인할것.

#include <cstdio>

int A[101];
int S[101];
int D[101][51];

const int minLimit = -32768*100;
int max(int a, int b){ return a>b?a:b; }

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&A[i]);
	}

	for(int i = 1 ; i <= N ; i++) S[i] = S[i-1]+A[i];
	for(int j = 1 ; j <= M ; j++) D[0][j] = minLimit;

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= M ; j++){
			D[i][j] = D[i-1][j];
			for(int k = 1 ; k <= i ; k++){
				if(k >= 2) D[i][j] = max(D[i][j],D[k-2][j-1]+S[i]-S[k-1]);
				else if(k == 1 && j == 1) D[i][j] = max(D[i][j],S[i]);
			}
		}
	}

	printf("%d\n",D[N][M]);

	return 0;
}

*/
