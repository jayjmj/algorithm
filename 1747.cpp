/*
#include <cstdio>

bool isPrime(int num){
	if(num == 1) return false;
	bool ans = true;
	for(int i = 2 ; i*i <= num ; i++){
		if(num % i == 0){
			ans = false;
			break;
		}
	}
	return ans;
}

bool check(int n){
	int rev = 0;
	int num = n;
	while(num){
		rev = rev*10 + num%10;
		num = num/10;
	}
	return n == rev;
}

int palindrome(int num){
	while(1){
		if(check(num)) return num;
		else num++;
	}
}

int main(){

	int N;
	scanf("%d",&N);

	int num = N;
	while(1){
		num = palindrome(num);
		if(isPrime(num)){
			printf("%d\n",num);
			break;
		}
		num++;
	}

	return 0;
}
*/
