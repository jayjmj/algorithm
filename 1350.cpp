/*
#include <cstdio>

int file[1000];

int main(){
	int N;
	scanf("%d",&N);

	for(int i = 0 ; i < N ; i++) scanf("%d",&file[i]);

	int cSize;
	scanf("%d",&cSize);

	long long count = 0;
	for(int i = 0 ; i < N ; i++) count += file[i]/cSize + (file[i]%cSize>0?1:0);

	printf("%lld\n",count*cSize);

	return 0;
}
*/
