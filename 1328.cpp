/*

#include <cstdio>

long long D[101][101][101];
const int mod = 1000000007;

int main(){

	int N,L,R;
	scanf("%d %d %d",&N,&L,&R);


	for(int n = 1 ; n <= N ; n++){
		for(int l = 1 ; l <= n ; l++){
			for(int r = 1 ; r <= n ; r++){
				if(n == 1) D[n][l][r] = 1;
				else if((l == 1 && r == n) || (l == n && r == 1)){
					D[n][l][r] = 1;
				}
				else{
					D[n][l][r] = (D[n-1][l-1][r] + D[n-1][l][r-1] + D[n-1][l][r]*(n-2))%mod;
				}
			}
		}
	}

	printf("%d\n",D[N][L][R]);

	return 0;
}

*/
