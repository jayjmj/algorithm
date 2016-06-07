/*#include <cstdio>

char area[50][50];

int main(){

	int R,C;
	scanf("%d %d",&R,&C);
	getchar();

	for(int i = 0 ; i < R ; i++){
		for(int j = 0 ; j < C ; j++){
			scanf("%c",&area[i][j]);
		}
		getchar();
	}

	int count[5] = {0,};
	for(int i = 0 ; i < R-1 ; i++){
		for(int j = 0 ; j < C-1 ; j++){
			int carCnt = 0;
			if(area[i][j] == '#') continue;
			else if(area[i][j] == 'X') carCnt++;
			if(area[i+1][j] == '#') continue;
			else if(area[i+1][j] == 'X') carCnt++;
			if(area[i][j+1] == '#') continue;
			else if(area[i][j+1] == 'X') carCnt++;
			if(area[i+1][j+1] == '#') continue;
			else if(area[i+1][j+1] == 'X') carCnt++;

			count[carCnt]++;
		}
	}

	for(int i = 0 ; i <= 4 ; i++) printf("%d\n",count[i]);

	return 0;
}*/
