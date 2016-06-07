/*
 * 이상하게, memset(D,maxCnt,sizeof(D))를 하면 엄청나게 큰 값이 세팅이된다 ---> 이유가??


#include <cstdio>
#include <cstring>

using namespace std;

int A[101];
int D[10001];

int min(int a, int b){
	return a<b?a:b;
}

const int maxCnt = 10001;

int main(){

	int n,k;
	scanf("%d %d",&n,&k);

	for(int i = 1 ; i <= n ; i++){
		scanf("%d",&A[i]);
	}

	for(int i = 0 ; i <= k ; i++){
		D[i] = maxCnt;
	}

	D[0] = 0;
	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= k ; j++){
			if(j-A[i] >= 0) D[j] = min(D[j],D[j-A[i]]+1);
		}
	}

	if(D[k] != maxCnt) printf("%d\n",D[k]);
	else printf("%d\n",-1);

	return 0;
}*/
