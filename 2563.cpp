/*
#include <cstdio>

int paper[101][101];

int main(){

	int N;
	scanf("%d",&N);

	int x,y;
	for(int p = 0 ; p < N ; p++){
		scanf("%d %d",&x,&y);
		for(int i = x ; i < x+10 ; i++){
			for(int j = y ; j < y+10 ; j++){
				if(paper[i][j] != 1)	paper[i][j] = 1;
			}
		}
	}

	int cnt = 0;
	for(int i = 1 ; i < 100 ; i++){
		for(int j = 1 ; j < 100 ; j++){
			if(paper[i][j]) cnt++;
		}
	}

	printf("%d\n",cnt);

	return 0;
}
*/
