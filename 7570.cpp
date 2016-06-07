/*

#include <cstdio>

int stuLoc[1000001];

int main(){

	int N;
	scanf("%d",&N);

	int num;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&num);
		stuLoc[num] = i;
	}

	bool c = false;
	int cnt = 1, m = 0;
	for(int i = 1; i < N ; i++){
		if(stuLoc[i] < stuLoc[i+1]){
			cnt++;
			if(m < cnt) m = cnt;
			c = true;
		}
		else{
			if(c){
				if(m < cnt) m = cnt;
				cnt = 1;
				c = false;
			}
		}
	}

	printf("%d\n",N-m);

	return 0;
}
*/
