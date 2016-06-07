/* 사용없는 subproblem을 가지고 다음 problem을 계산하는 것에 대해 예외처리가 되지 않았다.

#include <cstdio>
#include <vector>

using namespace std;

int C[301][301];
int D[301][301];

int max(int a,int b){return a>b?a:b;}

int main(){

	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);

	int a,b,c;
	for(int i = 0 ; i < K ; i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a < b && C[a][b] < c) C[a][b] = c;
	}

	for(int j = 2 ; j <= M ; j++){
		for(int i =2 ; i <= N ; i++){
			if(i>=j){
				if(j==2){
					D[i][j] = C[1][i];
				}
				else{
					for(int k = 1 ; k < i-1 ; k++){
						if(C[i-k][i] && D[i-k][j-1] != 0){
							D[i][j] = max(D[i][j],D[i-k][j-1]+C[i-k][i]);
						}
					}
				}
			}
		}
	}

	int max = 0;
	for(int i = 2 ; i <= M ; i++){
		if(max < D[N][i] ) max = D[N][i];
	}

	printf("%d\n",max);

	return 0;
}*/
