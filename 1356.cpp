/*
#include <cstdio>

int num[11];

int main(){
	int N;
	scanf("%d",&N);

	int len = 0;
	int tmp = N;
	while(tmp != 0){
		num[len] =tmp%10;
		tmp /= 10;
		len++;
	}

	bool ans = false;
	for(int i = 1; i < len ; i++){
		int a=1,b=1;
		for(int j = 0 ; j < i ; j++) a*=num[j];
		for(int j = i ; j < len ; j++) b*=num[j];
		if(a==b){
			ans = true;
			break;
		}
	}

	if(ans) printf("YES\n");
	else printf("NO\n");

	return 0;
}
*/
