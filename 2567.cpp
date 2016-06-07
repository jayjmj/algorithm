/*#include <cstdio>

bool c[101][101];

int xMove[] = {0,1,0,-1};
int yMove[] = {1,0,-1,0};

int main(){

	int N;
	scanf("%d",&N);

	int a,b;
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d",&a,&b);
		for(int xx = a ; xx < a+10 ; xx++){
			for(int yy = b ; yy < b+10 ; yy++){
				c[xx][yy] = true;
			}
		}
	}

	int count = 0;
	for(int i = 1 ; i < 100 ; i++){
		for(int j = 1 ; j < 100 ; j++){
			if(c[i][j]){
				for(int k = 0 ; k < 4 ; k++){
					int nx = i + xMove[k];
					int ny = j + yMove[k];
					if(nx >=0 && nx <= 100 && ny >= 0 && ny <= 100 && !c[nx][ny]) count++;
				}
			}
		}
	}

	printf("%d\n",count);

	return 0;
}*/
