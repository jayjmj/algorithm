/*
#include <cstdio>
#include <cstring>

char S1[1002];
char S2[1002];

int D[1001][1001];

int max(int a, int b){return a>b?a:b;}

int main(){

	scanf("%s",S1+1);
	scanf("%s",S2+1);

	int len1 = strlen(S1+1);
	int len2 = strlen(S2+1);

	for(int i = 1 ; i <= len1 ; i++){
		for(int j = 1 ; j <= len2 ; j++){
			if(S1[i] == S2[j]){
				D[i][j] = D[i-1][j-1] + 1;
			}
			else{
				D[i][j] = max(D[i-1][j],D[i][j-1]);
			}
		}
	}

	printf("%d",D[len1][len2]);

	return 0;
}
*/
