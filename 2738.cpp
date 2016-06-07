/*
#include <cstdio>

int ans[100][100];

int main(){

	int N,M;
	scanf("%d %d",&N,&M);
	for(int i = 0 ; i < N; i++){
		for(int j = 0 ; j < M ; j++){
			scanf("%d",&ans[i][j]);
		}
	}

	int temp;
	for(int i = 0 ; i < N; i++){
		for(int j = 0 ; j < M ; j++){
			scanf("%d",&temp);
			ans[i][j] += temp;
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/


/*#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	int** ans;
	ans = (int**)malloc((N+1)*sizeof(int*));
	for(int i = 1 ; i <= N ; i++){
		ans[i] = (int*)malloc((M+1)*sizeof(int));
	}

	for(int i = 1 ; i <= N; i++){
		for(int j = 1 ; j <= M ; j++){
			scanf("%d",&ans[i][j]);
		}
	}

	int temp;
	for(int i = 1 ; i <= N; i++){
		for(int j = 1 ; j <= M ; j++){
			scanf("%d",&temp);
			ans[i][j] += temp;
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/
