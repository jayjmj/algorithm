/*

#include <cstdio>

int D[101][10][4]; // 0 -> 0이나 9에 들른적이 없는 수, 1-> 0에 들른 수, 2-> 9에 들른 수, 3-> 0,9 둘다 들른 수
const int mod = 1000000000;

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i < 10 ; i++){
		if(i == 9) D[1][i][2] = 1;
		else D[1][i][0] = 1;
	}
	for(int i = 2 ; i <= N ; i++){
		for(int j = 0 ; j < 10 ; j++){
			if(j == 0){
				D[i][j][3] = (D[i][j][3] + D[i-1][j+1][2] + D[i-1][j+1][3])%mod;
				D[i][j][1] = (D[i][j][1] + D[i-1][j+1][0] + D[i-1][j+1][1])%mod;
			}
			else if(j == 9){
				D[i][j][3] = (D[i][j][3] + D[i-1][j-1][1] + D[i-1][j-1][3])%mod;
				D[i][j][2] = (D[i][j][2] + D[i-1][j-1][0] + D[i-1][j-1][2])%mod;
			}
			else{
				for(int k = 0 ; k < 4 ; k++){
					D[i][j][k] = (D[i-1][j-1][k] + D[i-1][j+1][k])%mod;
				}
			}
		}
	}

	int ans = 0;
	for(int i = 0 ; i < 10 ; i++){
		ans = (ans + D[N][i][3])%mod;
	}

	printf("%d\n",ans);

	return 0;
}
*/



/*

#include <cstdio>

int D[101][10][1<<10]; // 마지막 dimension을 (1<<10)-1로 둬서 계속 틀렸음..ㅠ
const int mod = 1000000000;

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i < 10 ; i++) D[1][i][1<<i] = 1;
	for(int i = 2 ; i <= N ; i++){
		for(int j = 0 ; j < 10 ; j++){
			for(int k = 0 ; k <= (1<<10)-1 ; k++){
				if(j-1 >= 0) D[i][j][k|(1<<j)] += D[i-1][j-1][k];
				if(j+1 < 10) D[i][j][k|(1<<j)] += D[i-1][j+1][k];
				D[i][j][k|(1<<j)] %= mod;
			}
		}
	}

	int ans = 0;
	for(int i = 0 ; i < 10 ; i++){
		ans = (ans + D[N][i][(1<<10)-1])%mod;
	}

	printf("%d\n",ans);

	return 0;
}

*/
