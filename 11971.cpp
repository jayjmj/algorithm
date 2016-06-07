/*
#include <cstdio>

int s[101];
int v[101];

bool chk(int a,int b,int c,int d){
    if(b<=c||d<=a) return false;
    else return true;
}

int main(){
    int N,M;
    scanf("%d %d",&N,&M);

    for(int i = 1 ; i <= N ; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        s[i] = s[i-1]+x;
        v[i] = y;
    }

    int p = 0;
    int max = 0;
    for(int i = 1; i <= M ; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        for(int j = 1 ; j <= N ; j++){
            if(chk(s[j-1],s[j],p,p+x)){
                if(max < y-v[j]) max = y-v[j];
            }
        }
        p += x;
    }

    printf("%d\n",max);

    return 0;
}
*/
