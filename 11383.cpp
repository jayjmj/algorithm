/*#include <cstdio>

char A[11][11];

int main(){

    int N,M;
    scanf("%d %d",&N,&M);
    getchar();

    for(int i = 1 ; i <= N; i++){
        for(int j = 1 ; j <= M ; j++){
            scanf("%c",&A[i][j]);
        }
        getchar();
    }

    bool ans = true;
    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= M ; j++){
            for(int k = 0 ; k < 2; k++){
                char x;
                scanf("%c",&x);
                if(x != A[i][j]){
                    ans = false;
                    break;
                }
            }
            if(!ans) break;
        }
        getchar();
        if(!ans) break;
    }

    if(ans) printf("Eyfa\n");
    else printf("Not Eyfa\n");

    return 0;
}*/
