/*#include <cstdio>
#include <cmath>

bool chk[1000001];
bool notPrime[1000001];

const int l = 1000000;

int main(){
	long long min, max;
	scanf("%lld %lld",&min,&max);

	long long limit = sqrt(max);

	for(int i = 2 ; i <= l ; i++){
		if(notPrime[i] == true) continue;

		for(int j = 2*i ; j <= l ; j += i){
			notPrime[j] = true;
		}
	}

	for(long long i = 2 ; i <= limit ; i++){
		if(notPrime[i]) continue;
		long long num = i*i;
		long long idx = min%num == 0 ? min/num : min/num+1;
		while(idx*num <= max){
			chk[idx*num-min] = true;
			idx++;
		}
	}

	int count = 0;
	for(long long i = min ; i <= max ; i++){
		if(!chk[i-min]) count++;
	}

	printf("%d",count);

	return 0;
}*/


/*
#include <cstdio>
#include <cmath>

bool chk[1000001];

int main(){
	long long min, max;
	scanf("%lld %lld",&min,&max);

	long long limit = sqrt(max);

	for(long long i = 2 ; i <= limit ; i++){

		long long num = i*i;
		long long idx = min%num == 0 ? min/num : min/num+1;
		while(idx*num <= max){
			chk[idx*num-min] = true;
			idx++;
		}
	}

	int count = 0;
	for(long long i = min ; i <= max ; i++){
		if(!chk[i-min]) count++;
	}

	printf("%d",count);

	return 0;
}
*/
