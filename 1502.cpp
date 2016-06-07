/*
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

typedef struct loc{
	int x,y;
	loc(int _x,int _y){x=_x;y=_y;}
} Loc;

int xMove[] = {0,0,1,-1};
int yMove[] = {1,-1,0,0};

bool C[9][9];

vector<Loc> r;

bool dfs(Loc s,Loc d,int order, int m, int n){

	r.push_back(s);
	C[s.x][s.y] = true;

	order++;
	for(int i = 0 ; i < 4 ; i++){
		int nx = s.x+xMove[i];
		int ny = s.y+yMove[i];

		if(nx>0 && nx<=m && ny>0 && ny<=n && !C[nx][ny]){
			if(nx == d.x && ny == d.y){
				if(order == m*n){
					r.push_back(Loc(nx,ny));
					return true;
				}
			}
			else{
				Loc next = Loc(nx,ny);
				if(dfs(next,d,order,m,n)) return true;
			}
		}
	}

	r.pop_back();
	C[s.x][s.y] = false;
	return false;

}

int main(){

	int T;
	scanf("%d",&T);

	int m,n,sx,sy,dx,dy;
	for(int test_case = 1 ; test_case <= T ; test_case++){
		scanf("%d %d %d %d %d %d",&m,&n,&sx,&sy,&dx,&dy);

		if(((sx+sy)&1)^((dx+dy)&1)){
			if(((m*n)&1) == 1){
				printf("-1\n");
				continue;
			}
		}
		else{
			if(((m*n)&1) == 0){
				printf("-1\n");
				continue;
			}
		}

		Loc src = Loc(sx,sy);
		Loc dst = Loc(dx,dy);

		if(dfs(src,dst,1,m,n)){
			printf("1\n");
			for(int i = 0 ; i < m*n ; i++) printf("%d %d\n",r[i].x,r[i].y);
		}
		else{
			printf("-1\n");
		}
		memset(C,false,sizeof(C));
		r.clear();
	}

	return 0;
}
*/


