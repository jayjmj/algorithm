/*#include <cstdio>

const int EE = 0;
const int EN = 1;
const int NE = 2;
const int NN = 3;

int D[101][101][4];
const int mod = 100000;

int main(){
	int w,h;
	scanf("%d %d",&w,&h);

	for(int j = 1; j <= h ; j++){
		for(int i = 1; i <= w ; i++){
			if(i==1){
				D[i][j][EE] = 0;
				D[i][j][EN] = 0;
				D[i][j][NE] = 0;
				D[i][j][NN] = 1;
			}
			else if(j==1){
				D[i][j][EE] = 1;
				D[i][j][EN] = 0;
				D[i][j][NE] = 0;
				D[i][j][NN] = 0;
			}
			else{
				D[i][j][EE] = (D[i-1][j][EE]+D[i-1][j][NE])%mod;
				D[i][j][EN] = D[i][j-1][EE];
				D[i][j][NE] = D[i-1][j][NN];
				D[i][j][NN] = (D[i][j-1][EN]+D[i][j-1][NN])%mod;
			}

		}
	}

	int ans = 0;
	for(int i = 0 ; i < 4 ; i++){
		ans = (ans + D[w][h][i])%mod;
	}
	printf("%d\n",ans);

	return 0;
}*/
