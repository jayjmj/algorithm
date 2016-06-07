/*
#include <cstdio>

int main(){
	int A,B;
	scanf("%d %d",&A,&B);

	int sum = 0;
	int ansA = 0,ansB = 0;
	int num = 1;
	int cur = 1;
	while(cur <= B){
		for(int i = 1 ; i <= num ; i++){
			sum += num;
			if(cur == A-1) ansA = sum;
			if(cur == B) ansB = sum;
			cur++;
			if(cur > B) break;
		}
		num++;
	}

	printf("%d\n",ansB-ansA);

	return 0;
}
*/
