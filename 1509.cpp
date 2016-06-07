/*
#include <cstdio>
#include <cstring>

using namespace std;

int D[2501];
bool C[2501][2501];
char A[2502];

int min(int a,int b){return a<b?a:b;}

int main(){

	scanf("%s",A+1);
	int N = strlen(A+1);

	for(int i = 0 ; i < N ; i++){
		for(int j = 1 ; j <= N ; j++){
			if(i+j <= N){
				if(i == 0){
					C[j][j+i] = true;
				}
				else if(i == 1){
					C[j][j+i] = (A[j] == A[j+i]);
				}
				else{
					C[j][j+i] = (A[j] == A[j+i]) && C[j+1][j+i-1];
				}
			}
		}
	}

	D[0] = 0;
	for(int i = 1 ; i <= N ; i++){
		D[i] = -1;
		for(int j = 1 ; j <= i ; j++){
			if(C[j][i]){
				if(D[i] == -1) D[i] = D[j-1]+1;
				else D[i] = min(D[i],D[j-1]+1);
			}
		}
	}

	printf("%d\n",D[N]);

	return 0;
}
*/
