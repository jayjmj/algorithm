/*
#include <cstdio>

int chk[26];

int main(){
	char c;
	int max = 0;
	while(scanf("%c",&c) == 1 && c != EOF){
		int n = c-'a';
		if(n >= 0 && n < 26){
			chk[n]++;
			if(chk[n] > max) max = chk[n];
		}
	}

	for(int i = 0 ; i < 26 ; i++){
		if(chk[i] == max){
			printf("%c",i+'a');
		}
	}

	return 0;
}
*/
