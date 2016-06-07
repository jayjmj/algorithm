/*
#include <cstdio>

int count[10];

int main(){

	int N;
	scanf("%d",&N);

	while(N != 0){
		count[N%10]++;
		N = N/10;
	}

	int max = 0;
	for(int i = 0 ; i <= 8; i++){
		if(i == 6){
			int s;
			if((count[6]+count[9])%2 == 0) s = (count[6]+count[9])/2;
			else s = (count[6]+count[9]+1)/2;

			if(max < s) max = s;
		}
		else{
			if(max < count[i]) max = count[i];
		}
	}

	printf("%d",max);

	return 0;
}
*/
