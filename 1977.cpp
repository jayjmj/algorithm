/*
#include <cstdio>

int main(){

    int M,N;
    scanf("%d %d",&M,&N);

    bool first = true;
    int min,sum = 0;
    for(int i = 1 ; i*i <= N ; i++){
        if(i*i >= M){
            sum+= i*i;
            if(first){
                min = i*i;
                first = false;
            }
        }
    }

    if(sum != 0){
    	printf("%d\n",sum);
    	printf("%d\n",min);
    }
    else{
    	printf("-1\n");
    }


    return 0;
}
*/
