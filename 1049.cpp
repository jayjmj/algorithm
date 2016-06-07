/*
#include <cstdio>

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	int minPack = 6001, minOne = 1001;
	int package,one;
	for(int i = 1 ; i <= M ; i++){
		scanf("%d %d",&package,&one);
		if(minPack > package) minPack = package;
		if(minOne > one) minOne = one;
	}

	int total;
	if(minOne*6 > minPack){
		if(N%6*minOne > minPack){
			total = (N/6+1)*minPack;
		}
		else{
			total = N/6*minPack + N%6*minOne;
		}
	}
	else{
		total = N*minOne;
	}

	printf("%d\n",total);

	return 0;
}
*/
