/*
#include <cstdio>
#include <algorithm>

using namespace std;

int D[40001];

int main(){

    int T;
    scanf("%d",&T);

    for(int t = 1 ; t <= T ; t++){
        int N;
        scanf("%d",&N);

        int idx = 0;
        for(int i = 0 ; i < N ; i++){
            int num;
            scanf("%d",&num);

            int loc = lower_bound(D,D+idx,num)-D;
            if(idx == loc) idx++;
            D[loc] = num;
        }
        printf("%d\n",idx);
    }


    return 0;
}
*/
