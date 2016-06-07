/*
#include <cstdio>

int alpha[26] = {0};

int main(){

	int N;
	scanf("%d",&N);

	char name[31];
	for(int i = 0 ; i < N ; i++){
		scanf("%s",name);

		alpha[name[0]-'a']++;
	}

	bool isPrinted = false;
	for(int i = 0 ; i < 26 ; i++){
		if(alpha[i] >= 5){
			printf("%c",'a'+i);
			isPrinted = true;
		}
	}
	if(!isPrinted) printf("PREDAJA");

	return 0;
}
*/
