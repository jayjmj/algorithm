/* integer가 한번에 계산 결과로 낼 수 있는 범위를 조심!! i를 int로 둬서 2*i*(i+1)*(2*i+1)를 계산했을 때 범위가 넘었었음.
#include <cstdio>

int main(){

	int n;
	scanf("%d",&n);

	long long i;
	for(i = 1 ; 2*i*(i+1)*(2*i+1)/6-i*i-i+i <= n; i++);

	printf("%lld\n",i-1);

	return 0;
}
*/
