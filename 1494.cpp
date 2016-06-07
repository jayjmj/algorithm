/* runtime error는 메모리가 아닌 divide by zero에 의해서 발생할 수도 있다.
 * reculsive로 짰을 때, stack이 많이 쌓여서 에러가 날까봐 while로 짠 코드가 있다.(jayjmj 제출코드 참고)


#include <cstdio>

long long loc(long long s0, long long s1, long long n){

	if(n == 0) return s0;
	else if(n == 1) return s1;
	else if(n == 2){
		if(s0 > s1) return s0-s1;
		else return s1-s0;
	}
	else{
		if(s0 < s1) return loc(s1,s1-s0,n-1);
		else if(s0 == s1 || s1 == 0){
			if(n%3 == 0) return s0;
			else if(n%3 == 1) return s1;
			else return s0-s1;
		}
		else{
			long long d = 2*s1;
			if(s0 >= d){
				long long m = s0/d;
				if(n >= 3*m){
					return loc(s0-m*d,s1,n-3*m);
				}
				else{
					m = n/3;
					return loc(s0-m*d,s1,n-3*m);
				}
			}
			else{
				return loc(s1,s0-s1,n-1);
			}
		}
	}
}

int main(){

	long long first,second;
	int N;
	scanf("%lld %lld %d",&first,&second,&N);

	long long n;
	for(int i = 0 ; i < N ; i++){
		scanf("%lld",&n);

		printf("%lld\n",loc(first,second,n));
	}

	return 0;
}*/
