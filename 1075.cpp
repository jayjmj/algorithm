/* 	비효율적인 방법..

#include <cstdio>

int main(){
	int N,F;
	scanf("%d %d",&N,&F);

	int lim = N/100*100;
	int n;
	for(n = 1 ; F*n < lim ; n++);

	printf("%02d\n",F*n%100);

	return 0;
}
*/
