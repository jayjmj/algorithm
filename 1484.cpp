// 풀이는 맞았지만, N범위가 100000인데도 제곱을 long long 처리를 안해서 5번이나 틀린 문제;;

/*
#include <cstdio>

int main(){

    //a^2 = b^2+n;
    int G;
    scanf("%d",&G);

    //a+b <= G
    bool success = false;
    for(long long i = 1; i <= G ; i++){
        long long res = i*i+G;

        int left = i;
        int right = G;
        while(left <= right){
            long long mid = (left+right)/2;

            if(mid*mid > res) right = mid-1;
            else if(mid*mid < res) left = mid+1;
            else{
                success = true;
                printf("%lld\n",mid);
                break;
            }
        }
    }

    if(!success) printf("-1\n");

    return 0;
}
*/
