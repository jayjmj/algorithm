/*
#include <cstdio>
#include <cstring>

int gapAbs(int a,int b){
	if(a>b) return a-b;
	else return b-a;
}

bool C[3000];

int main(){
	int n;

	while(scanf("%d",&n) == 1){
		memset(C,0,sizeof(C));

		int prev, next;
		bool success = true;
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&next);
			if(i != 0){
				int tmp = gapAbs(prev,next);
				if(tmp < 1 || tmp > n-1) success = false;
				C[tmp] = true;
			}
			prev = next;
		}

		for(int i = 1 ; i < n && success ; i++){
			if(!C[i]) success = false;
		}

		if(success) printf("Jolly\n");
		else printf("Not jolly\n");
	}

	return 0;
}
*/
