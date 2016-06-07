/*
#include <cstdio>

bool row[50],col[50];

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	getchar();

	char c;
	int rowCnt = 0,colCnt = 0;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < M ; j++){
			scanf("%c",&c);
			if(c != '.'){
				if(!row[i]){
					rowCnt++;
					row[i] = true;
				}
				if(!col[j]){
					colCnt++;
					col[j] = true;
				}
			}
		}
		getchar();
	}

	printf("%d",N-rowCnt > M-colCnt ? N-rowCnt : M-colCnt);

	return 0;
}
*/
