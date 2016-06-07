/*
#include <cstdio>
#include <cstring>

int main(){
	int T;
	scanf("%d",&T);

	char N[1000001],M[1000001];
	for(int t = 1 ; t <= T ; t++){
		scanf("%s %s",N,M);

		int len = strlen(N);

		int diff = 0, oneNCnt = 0, oneMCnt = 0;
		for(int i = 0 ; i < len ; i++){
			if(N[i] == '1') oneNCnt++;
			if(M[i] == '1') oneMCnt++;
			if(N[i] != M[i]) diff++;
		}

		int gap = oneNCnt-oneMCnt < 0 ? oneMCnt-oneNCnt : oneNCnt-oneMCnt;

		printf("%d\n",(diff-gap)/2 + gap);
	}

	return 0;
}
*/
