/* 다른사람들은 D의 세번째 부분(나무1인지 나무2인지) 를 사용하지 않았다... 어떻게??
#include <cstdio>

bool isFallDownTree1[1001];
int D[1001][31][3];

int max(int a, int b){return a>b?a:b;}

int main(){
	int T,W;
	scanf("%d %d",&T,&W);

	int loc;
	for(int i = 1 ; i <= T ; i++){
		scanf("%d",&loc);
		if(loc == 1) isFallDownTree1[i] = true;
		else isFallDownTree1[i] = false;
	}


	for(int i = 1 ; i <= T ; i++){
		if(i == 1){
			if(isFallDownTree1[i]) D[i][0][1] = 1;
			else D[i][1][2] = 1;
		}
		else{
			for(int j = 0 ; j <= W ; j++){
				D[i][j][1] = D[i-1][j][1];
				D[i][j][2] = D[i-1][j][2];
				if(j != 0){
					D[i][j][1] = max(D[i][j][1],D[i-1][j-1][2]);
					D[i][j][2] = max(D[i][j][2],D[i-1][j-1][1]);
				}
				if(isFallDownTree1[i]) D[i][j][1]++;
				else D[i][j][2]++;
			}
		}
	}

	int maxGet = 0;
	for(int i = 0 ; i <= W ; i++){
		if(maxGet < D[T][i][1]) maxGet = D[T][i][1];
		if(maxGet < D[T][i][2]) maxGet = D[T][i][2];
	}
	printf("%d\n", maxGet);

	return 0;
}
*/
