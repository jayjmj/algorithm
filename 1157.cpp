/*
#include <cstdio>

int alpha[26] = {0};

int alphaToInt(char c){

	if(c-'A' >= 26) return c - 'a';
	else return c - 'A';
}

int m1157(){

	int max = 0;
	char c;
	while(scanf("%c",&c) == 1 && c != '\n' && c != EOF){
		alpha[alphaToInt(c)]++;
		if(max < alpha[alphaToInt(c)]) max = alpha[alphaToInt(c)];
	}

	int same = 0;
	char ans;
	for(int i = 0 ; i < 26 ; i++){
		if(max == alpha[i]){
			same++;
			ans = 'A'+i;
		}
	}

	if(same > 1) printf("?\n");
	else{
		printf("%c\n",ans);
	}

	return 0;
}
*/
