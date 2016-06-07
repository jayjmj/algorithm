// 가로세로가 M,N이 반대로 되서 계속 틀림..;;ㅠ

/*
#include <cstdio>
#include <cstring>

int area[55][55];

int xMov[] = {0,0,1,-1};
int yMov[] = {1,-1,0,0};

void dfs(int x,int y, int M, int N){

	area[x][y] = 2;

	for(int i = 0 ; i < 4 ; i++){
		int nx = x+xMov[i];
		int ny = y+yMov[i];

		if(nx >= 0 && ny >= 0 && nx < M && ny < N && area[nx][ny] == 1){
			dfs(nx,ny,M,N);
		}
	}
}

int main(){

	//freopen("input.txt","r",stdin);

	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ;t++){
		memset(area,0,sizeof(area));

		int M,N,K;
		scanf("%d %d %d",&M,&N,&K);

		for(int i = 0 ; i < K ; i++){
			int x,y;
			scanf("%d %d",&x,&y);
			area[x][y] = 1;
		}

		int count = 0;
		for(int i = 0 ; i < M ; i++){
			for(int j = 0 ; j < N ; j++){
				if(area[i][j] == 1){
					dfs(i,j,M,N);
					count++;
				}
			}
		}

		printf("%d\n",count);
	}

	return 0;
}
*/
