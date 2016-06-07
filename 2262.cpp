/*#include <cstdio>
#include <cmath>

using namespace std;

int D[257][257][2];
int A[257];

int min(int a, int b){
	return a<b?a:b;
}

int main(){

	int n;
	scanf("%d",&n);

	for(int i = 1 ; i <= n ; i++){
		scanf("%d",&A[i]);
	}

	for(int j = 0; j < n ; j++){
		for(int i = 1; i <= n ; i++){
			if(j == 0){
				D[i][i+j][0] = A[i];
				D[i][i+j][1] = 0;
			}
			else if(j == 1){
				D[i][i+j][0] = min(A[i],A[i+j]);
				D[i][i+j][1] = abs(A[i]-A[i+j]);
			}
			else{
				if(i+j <= n){
					// k = 0
					D[i][i+j][0] = min(D[i][i][0],D[i+1][i+j][0]);
					D[i][i+j][1] = D[i][i][1] + D[i+1][i+j][1] + abs(D[i][i][0] - D[i+1][i+j][0]);
					// k >= 1
					for(int k = 1 ; k <= j ; k++){
						int x = D[i][i+j][1];
						int y = D[i][i+k][1] + D[i+k+1][i+j][1] + abs(D[i][i+k][0] - D[i+k+1][i+j][0]);
						if(x > y){
							D[i][i+j][0] = min(D[i][i+k][0],D[i+k+1][i+j][0]);
							D[i][i+j][1] = y;
						}
					}
				}
			}
		}
	}

	printf("%d",D[1][n][1]);

	return 0;
}*/
