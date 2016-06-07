/*
#include <cstdio>

int area[102][102];

int main(){

	int N;
	scanf("%d",&N);

	for(int t = 1 ; t <= N ; t++){
		int a1,b1,a2,b2;
		scanf("%d %d %d %d",&a1,&b1,&a2,&b2);

		for(int i = a1; i <= a1+a2-1 ; i++){
			for(int j = b1; j <= b1+b2-1 ; j++){
				area[i][j] = t;
			}
		}
	}

	for(int t = 1 ; t <= N ; t++){
		int cnt = 0;
		for(int i = 0 ; i <= 101 ; i++){
			for(int j = 0 ; j <= 101 ; j++){
				if(area[i][j] == t) cnt++;
			}
		}
		printf("%d\n",cnt);
	}

	return 0;
}
*/
