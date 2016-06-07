/*
#include <cstdio>

const int mod = 1234567;

int getLen(long long N){
	if(N == 0) return 0;
	else return getLen(N/10)+1;
}

long long pow(int a,int b){
	if(b==0) return 1;
	else if(b==1) return a;
	else{
		long long tmp = pow(a,b/2);
		if(b%2) return tmp*tmp*a;
		else return tmp*tmp;
	}
}

int main(){

	long long N;
	scanf("%lld",&N);

	int length = getLen(N);
	long long count = 0;
	for(int i = 1 ; i <= length ;i++){
		if(i!=length) count = (count + 9*pow(10,i-1)*i)%mod;
		else count = (count + (N-pow(10,length-1)+1)*length)%mod;
	}

	printf("%lld",count);

	return 0;
}
*/
