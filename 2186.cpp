/*
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int c[101][101][81];
char al[101][101];
char sen[82];

typedef struct axis{
	int x;
	int y;
	axis(int _x, int _y){
		x = _x; y = _y;
	}
} Axis;

int main(){

	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	getchar();

	char ch;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= M ; j++){
			scanf("%c",&ch);
			al[i][j] = ch;
		}
		getchar();
	}
	scanf("%s",sen+1);

	memset(c,0,sizeof(c));

	queue<Axis> q;
	int len = strlen(sen+1);
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= M ; j++){
			if(al[i][j] == sen[1]){
				q.push(Axis(i,j));
				c[i][j][1] = 1;
			}
		}
	}


	int idx = 1;
	while(!q.empty()){
		idx++;
		if(idx > len) break;
		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			Axis a = q.front();
			q.pop();

			for(int k = 1 ; k <= K ; k++){
				int negX = a.x - k;
				int posX = a.x + k;
				int negY = a.y - k;
				int posY = a.y + k;

				if(negX >= 0 && al[negX][a.y] == sen[idx]){
					if(c[negX][a.y][idx] == 0) q.push(Axis(negX,a.y));
					c[negX][a.y][idx] += c[a.x][a.y][idx-1];
				}
				if(posX <= N && al[posX][a.y] == sen[idx]){
					if(c[posX][a.y][idx] == 0) q.push(Axis(posX,a.y));
					c[posX][a.y][idx] += c[a.x][a.y][idx-1];
				}
				if(negY >= 0 && al[a.x][negY] == sen[idx]){
					if(c[a.x][negY][idx] == 0) q.push(Axis(a.x,negY));
					c[a.x][negY][idx] += c[a.x][a.y][idx-1];
				}
				if(posY <= M && al[a.x][posY] == sen[idx]){
					if(c[a.x][posY][idx] == 0) q.push(Axis(a.x,posY));
					c[a.x][posY][idx] += c[a.x][a.y][idx-1];
				}
			}
		}
	}

	int count = 0;
	if(!q.empty()){
		while(!q.empty()){
			Axis a = q.front();
			q.pop();

			count += c[a.x][a.y][len];

		}
	}

	printf("%d",count);

	return 0;
}
*/
