/* D[i][j] 는 i번째 행렬부터 j만큼 떨어진 행렬까지 최소값.

#include <cstdio>

typedef struct matrix{
	int a,b;
	matrix(){a=0;b=0;}
	matrix(int _a,int _b){
		a = _a; b = _b;
	}
}Matrix;

Matrix M[501];
int D[501][500];

int min(int a, int b){
	return a<b?a:b;
}

int main(){

	int N;
	scanf("%d",&N);

	int a,b;
	for(int i = 1 ; i <= N; i++){
		scanf("%d %d",&a,&b);
		M[i] = Matrix(a,b);
	}

	for(int j = 0 ; j < N ; j++){
		for(int i = 1 ; i <= N ; i++){
			if(i+j <= N){
				if(j == 0){
					D[i][j] = 0;
				}
				else{
					D[i][j] = D[i][0]+D[i+1][j-1]+M[i].a*M[i].b*M[i+j].b;
					for(int k = 1 ; k < j ; k++){
						D[i][j] = min(D[i][j],D[i][k]+D[i+k+1][j-k-1]+M[i].a*M[i+k].b*M[i+j].b);
					}
				}
			}
		}
	}

	printf("%d",D[1][N-1]);

	return 0;
}*/
