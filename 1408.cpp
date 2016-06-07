/*
#include <cstdio>

int main(){
	int t1[3],t2[3];
	scanf("%d:%d:%d",&t1[2],&t1[1],&t1[0]);
	scanf("%d:%d:%d",&t2[2],&t2[1],&t2[0]);

	int sum[3], carry = 0;
	for(int i = 0 ; i < 3 ; i++){
		sum[i] = t2[i] - t1[i] - carry;
		if(sum[i] < 0){
			if(i != 2) sum[i] += 60;
			else sum[i] += 24;
			carry = 1;
		}
		else{
			carry = 0;
		}
	}

	for(int i = 2 ; i >= 0 ; i--){
		printf("%02d",sum[i]);
		if(i != 0) printf(":");
	}

	return 0;
}
*/
