/*
#include <cstdio>

int main(){

	int M;
	scanf("%d",&M);

	int turn = 1, dir = 1;
	for(int i = 0 ; i < M ; i++){
		int t1, t2, d;
		scanf("%d %d %d",&t1,&t2,&d);

		turn = turn * t2 / t1;
		if(d==0) dir=dir*1;
		else dir=dir*(-1);
	}

	if(dir==1) printf("0 %d\n",turn);
	else printf("1 %d\n",turn);

	return 0;
}
*/
