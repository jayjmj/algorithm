/*
#include <cstdio>

void swap(unsigned long long *a,unsigned long long *b){
	unsigned long long tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

unsigned long long gcd(unsigned long long a,unsigned long long b){
	if(a==b || b == 0) return a;
	else gcd(b,a%b);
}

int main(){

	unsigned long long A,B;
	scanf("%llu %llu",&A,&B);

	if(A < B) swap(&A,&B);

	int count = gcd(A,B);
	for(int i = 0 ; i < count ; i++) printf("1");

	return 0;
}
*/
