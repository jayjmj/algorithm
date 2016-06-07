/*#include <cstdio>

int chk[5000000];
long long fib[5000000];
const int mod = 1000000;

long long fibo(long long n){
	if(n == 0) return 0%mod;
	else if(n == 1) return 1%mod;
	else if(fib[n] != 0) return fib[n];
	else{
		return fib[n] = (fibo(n-1)+fibo(n-2))%mod;
	}
}

int main(){

	long long n;
	scanf("%lld",&n);

	int freq;
	for(int i = 1 ; i <= n ; i++){
		long long tmp = fibo(i);
		if(chk[tmp]){
			if(chk[tmp] == tmp - fibo(i-1)){
				freq = i-1;
				break;
			}
		}
		else{
			chk[tmp] = tmp - fibo(i-1);
		}
	}

	printf("%lld\n",fibo(n%freq));

	return 0;
}*/
