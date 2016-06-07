/*
#include <cstdio>
#include <queue>

using namespace std;

char maze[51][51];
bool chk[51][51][1<<6];

int xMove[] = {0,0,1,-1};
int yMove[] = {1,-1,0,0};

struct Loc{
	int x,y;
	int key;
	Loc(){}
	Loc(int x,int y,int key):x(x),y(y),key(key){
	}
};

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	getchar();

	Loc src,dst;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= M ; j++){
			scanf("%c",&maze[i][j]);
			if(maze[i][j] == '0') src = Loc(i,j,0);
		}
		getchar();
	}

	int count = 0;
	bool succ = false;
	queue<Loc> q;
	q.push(src);
	chk[src.x][src.y][0] = true;
	while(!q.empty()){
		count++;
		int qSize = q.size();

		for(int qs = 0 ; qs < qSize ; qs++){
			Loc p = q.front();
			q.pop();

			for(int i = 0 ; i < 4 ; i++){
				int nx = p.x + xMove[i];
				int ny = p.y + yMove[i];

				if(nx >= 1 && nx <= N && ny >= 1 && ny <= M){

					if(maze[nx][ny] == '0' || maze[nx][ny] == '.'){
						if(!chk[nx][ny][p.key]){
							chk[nx][ny][p.key] = true;
							q.push(Loc(nx,ny,p.key));
						}
					}
					else if(maze[nx][ny] >= 'a' && maze[nx][ny] <= 'z'){
						if(!chk[nx][ny][p.key | (1<<(maze[nx][ny]-'a'))]){
							chk[nx][ny][p.key | (1<<(maze[nx][ny]-'a'))] = true;
							q.push(Loc(nx,ny,p.key | (1<<(maze[nx][ny]-'a'))));
						}
					}
					else if(maze[nx][ny] >= 'A' && maze[nx][ny] <= 'Z'){
						if(p.key & (1<<(maze[nx][ny]-'a'))){
							if(!chk[nx][ny][p.key]){
								chk[nx][ny][p.key] = true;
								q.push(Loc(nx,ny,p.key));
							}
						}
					}
					else if(maze[nx][ny] == '1'){
						succ = true;
						break;
					}
				}
			}
			if(succ) break;
		}
		if(succ) break;
	}

	if(succ) printf("%d\n",count);
	else printf("-1\n");

	return 0;
}
*/
