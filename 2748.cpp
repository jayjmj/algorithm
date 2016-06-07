/*

#include <cstdio>

long long F[90+1];

int main(){

    int n;
    scanf("%d",&n);

    for(int i = 0; i <= n ; i++){

        if(i == 0){
            F[0] = 0;
        }
        else if(i == 1){
            F[1] = 1;
        }
        else{
            F[i] = F[i-1] + F[i-2];
        }
    }

    printf("%lld\n",F[n]);

    return 0;
}
*/
