/*
#include <cstdio>
#include <cmath>

long long gcd(long long a, long long b){
	if(a == b || b == 0) return a;
	else return gcd(b,a%b);
}

int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);

	long long u = (long long)sqrt(b)-(long long)sqrt(a);
	long long d = b-a;
	long long g = gcd(u,d);
	if(u == 0) printf("0\n");
	else printf("%lld/%lld",u/g,d/g);

	return 0;
}
*/
