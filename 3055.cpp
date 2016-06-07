/*
#include <cstdio>
#include <queue>

using namespace std;

char area[50][50];
struct Axis{
	int x,y;
	Axis(int x,int y):x(x),y(y){}
};

int xMove[] = {1,0,-1,0};
int yMove[] = {0,1,0,-1};

int main(){
	int R,C;
	scanf("%d %d",&R,&C);
	getchar();

	queue<Axis> q;
	queue<Axis> wq;
	for(int i = 0 ; i < R ; i++){
		for(int j = 0 ; j < C ; j++){
			scanf("%c",&area[i][j]);
			if(area[i][j] == 'S') q.push(Axis(i,j));
			else if(area[i][j] == '*') wq.push(Axis(i,j));
		}
		getchar();
	}

	int count = 0;
	bool success = false;
	while(!q.empty()){
		count++;
		int qSize = q.size();
		for(int s = 0 ; s < qSize ; s++){
			Axis a = q.front();q.pop();

			if(area[a.x][a.y] != 'S') continue;

			for(int i = 0 ; i < 4 ; i++){
				int nx = a.x + xMove[i];
				int ny = a.y + yMove[i];

				if(nx >= 0 && ny >= 0 && nx < R && ny < C){
					if(area[nx][ny] == '.'){
						q.push(Axis(nx,ny));
						area[nx][ny] = 'S';
					}
					else if(area[nx][ny] == 'D'){
						success = true;
						break;
					}
				}
			}
		}

		if(success) break;

		int wqSize = wq.size();
		for(int s = 0 ; s < wqSize ; s++){
			Axis a = wq.front();wq.pop();

			for(int i = 0 ; i < 4 ; i++){
				int nx = a.x + xMove[i];
				int ny = a.y + yMove[i];

				if(nx >= 0 && ny >= 0 && nx < R && ny < C){
					if(area[nx][ny] != 'D' && area[nx][ny] != 'X' && area[nx][ny] != '*'){
						wq.push(Axis(nx,ny));
						area[nx][ny] = '*';
					}
				}
			}

		}
	}

	if(success) printf("%d\n",count);
	else printf("KAKTUS\n");

	return 0;
}
*/
