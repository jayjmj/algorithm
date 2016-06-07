/*#include <cstdio>
#include <queue>

using namespace std;

bool maze[101][101];
bool chk[101][101];

int xMove[] = {0,0,-1,1};
int yMove[] = {1,-1,0,0};

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	int num;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= M ; j++){
			scanf("%1d",&num);
			if(num == 1) maze[i][j] = true;
		}
	}

	pair<int,int> start = make_pair(1,1);
	chk[1][1] = true;
	queue<pair<int,int> > q;
	q.push(start);

	bool success = false;
	int count = 0;
	while(!q.empty()){
		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			pair<int,int> a = q.front();
			q.pop();

			for(int j = 0 ; j < 4 ; j++){
				int nx = a.first + xMove[j];
				int ny = a.second + yMove[j];

				if(nx > 0 && ny > 0 && nx <= N && ny <= M && maze[nx][ny] && !chk[nx][ny]){
					if(nx == N && ny == M){
						success = true;
						break;
					}
					q.push(make_pair(nx,ny));
					chk[nx][ny] = true;
				}
			}
			if(success) break;
		}
		count++;
		if(success) break;
	}

	printf("%d\n",count+1);

	return 0;
}*/
