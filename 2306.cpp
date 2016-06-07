/*
#include <cstdio>

int D[501][501];
int V[501];

const int A = 1;
const int G = 2;
const int C = 3;
const int T = 4;

int max(int a, int b){ return a>b?a:b;}

int main(){

	int idx = 1;
	char c;
	while(scanf("%c",&c)==1 && c != '\n' && c != EOF){
		if(c == 'a') V[idx] = A;
		else if(c == 'g') V[idx] = G;
		else if(c == 'c') V[idx] = C;
		else V[idx] = T;
		idx++;
	}

	int length = idx-1;
	for(int j = 1 ; j < length ; j++){
		for(int i = 1 ; i <= length ; i++){
			if(i+j <= length){
				if(j == 1){
					if(V[i]+V[i+j] == 5 && V[i] < V[i+j]) D[i][i+j] = 2;
					else D[i][i+j] = 0;
				}
				else{
					for(int k = 0 ; k <= j-1 ; k++){
						D[i][i+j] = max(D[i][i+j],D[i][i+k]+D[i+k+1][i+j]);
					}
					if(V[i]+V[i+j] == 5 && V[i] < V[i+j]) D[i][i+j] = max(D[i][i+j],D[i+1][i+j-1] + 2);
				}
			}
		}
	}

	printf("%d\n",D[1][length]);

	return 0;
}
*/
