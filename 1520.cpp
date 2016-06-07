/*#include <cstdio>

int A[501][501];
int D[501][501];

int xMove[] = {0,1,0,-1};
int yMove[] = {1,0,-1,0};

int move(int x,int y,int M, int N){

	if(x == 1 && y == 1){
		return 1;
	}
	else if(D[x][y] > 0) return D[x][y];
	else{
		for(int k = 0 ; k < 4 ; k++){
			int px = x+xMove[k];
			int py = y+yMove[k];

			if(x > 0 && x <= M && y > 0 && y <= N && A[x][y] < A[px][py]){
				D[x][y] += move(px,py,M,N);
			}
		}
	}
	return D[x][y];
}

int main(){

	int M,N;
	scanf("%d %d",&M,&N);

	for(int i = 1 ; i <= M ; i++){
		for(int j = 1 ; j <= N ; j++){
			scanf("%d",&A[i][j]);
		}
	}

	printf("%d",move(M,N,M,N));

	return 0;
}*/
