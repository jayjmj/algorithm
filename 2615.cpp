/*
#include <cstdio>

int game[21][21];
int D[20][20][4];

int xCase[] = {0,1,1,-1};
int yCase[] = {1,0,1,1};

int main(){

	for(int i = 1; i <= 19 ; i++){
		for(int j = 1 ; j <= 19; j++){
			scanf("%d",&game[i][j]);
		}
	}

	for(int i = 38; i >= 1 ; i--){
		for(int j = 1 ; j < i; j++){
			if(j < 1 || i-j < 1 || j > 19 || i-j > 19) continue;
			if(game[j][i-j] != 0){
				for(int k = 0 ; k < 4 ; k++){
					if(game[j][i-j] == game[j+xCase[k]][i-j+yCase[k]]) D[j][i-j][k] = D[j+xCase[k]][i-j+yCase[k]][k] + 1;
					if(D[j][i-j][k] == 4 && game[j-xCase[k]][i-j-yCase[k]] != game[j][i-j]){
						printf("%d\n",game[j][i-j]);
						printf("%d %d\n",j,i-j);
						return 0;
					}
				}
			}
		}
	}
	printf("0\n");

	return 0;
}
*/
