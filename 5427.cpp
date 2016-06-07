/*
#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

typedef struct loc{
    int x,y;
    loc(int _x,int _y){x=_x;y=_y;}
} Loc;

int xMove[] = {0,1,0,-1};
int yMove[] = {1,0,-1,0};

char area[1001][1001];

int main(){
    int T;
    scanf("%d",&T);

    for(int t = 1; t <= T ; t++){
        int w,h;
        scanf("%d %d",&w,&h);
        getchar();

        queue<Loc> move;
        queue<Loc> fire;
        for(int i = 1; i <= h ; i++){
            for(int j = 1; j <= w ; j++){
                scanf("%c",&area[i][j]);
                if(area[i][j]=='@') move.push(Loc(i,j));
                else if(area[i][j] == '*') fire.push(Loc(i,j));
            }
            getchar();
        }
       
        int cnt = 0;
        bool escape = false;
        while(!move.empty()){
       
            cnt++;
            // move
            int qSize = move.size();
            for(int i = 0 ; i < qSize ; i++){
                Loc a = move.front();
                move.pop();

                int nx,ny;
                if(area[a.x][a.y] == '@'){
                    for(int k = 0 ; k < 4 ; k++){
                        nx = a.x + xMove[k];
                        ny = a.y + yMove[k];

                        if(nx < 1 || ny < 1 || nx > h || ny > w){
                            escape = true;
                            break;
                        }

                        if(nx >= 1 && ny >= 1 && nx <= h && ny <= w && area[nx][ny] == '.'){
                            area[nx][ny] = '@';
                            move.push(Loc(nx,ny));
                        }
                    }
                }
                if(escape) break;
            }
            if(escape) break;

            // fire
            qSize = fire.size();
            for(int i = 0 ; i < qSize ; i++){
                Loc a = fire.front();
                fire.pop();

                int nx,ny;
                for(int k = 0 ; k < 4 ; k++){
                    nx = a.x + xMove[k];
                    ny = a.y + yMove[k];

                    if(nx >= 1 && ny >= 1 && nx <= h && ny <= w && area[nx][ny] != '#' && area[nx][ny] != '*'){
                        area[nx][ny] = '*';
                        fire.push(Loc(nx,ny));
                    }
                }
            }
        }

        if(escape) printf("%d\n",cnt);
        else printf("IMPOSSIBLE\n");

        memset(area,0,sizeof(area));
    }

    return 0;
}
*/
