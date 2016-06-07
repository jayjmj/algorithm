/*
#include <cstdio>

int A[100000];
int S[500];
int B[500];

const int maxNum = 1000000000;

int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}

int getRangeMin(int a,int b,int n){
	int ax = a/n;
	int ay = a%n;
	int bx = b/n;
	int by = b%n;

	int ans = maxNum;
	if(ax != bx){
		for(int i = a; i <= a+(n-ay-1) ; i++){
			ans = min(ans,A[i]);
		}
		for(int i = bx*n; i <= b; i++){
			ans = min(ans,A[i]);
		}
		for(int i = ax+1; i<= bx-1 ; i++){
			ans = min(ans,S[i]);
		}
	}
	else{
		for(int i = a; i <= b ; i++){
			ans = min(ans,A[i]);
		}
	}

	return ans;
}

int getRangeMax(int a,int b,int n){
	int ax = a/n;
	int ay = a%n;
	int bx = b/n;
	int by = b%n;

	int ans = 0;
	if(ax != bx){
		for(int i = a; i <= a+(n-ay-1) ; i++){
			ans = max(ans,A[i]);
		}
		for(int i = bx*n; i <= b; i++){
			ans = max(ans,A[i]);
		}
		for(int i = ax+1; i<= bx-1 ; i++){
			ans = max(ans,B[i]);
		}
	}
	else{
		for(int i = a; i <= b ; i++){
			ans = max(ans,A[i]);
		}
	}

	return ans;
}


int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	int n;
	for(n = 0; n*n <= N ; n++){
		S[n] = maxNum;
		B[n] = 0;
	}
	S[n] = maxNum;
	B[n] = 0;
	n--;

	for(int i = 0 ; i < N ; i++){
		scanf("%d",&A[i]);
		S[i/n] = min(S[i/n],A[i]);
		B[i/n] = max(B[i/n],A[i]);
	}


	for(int i = 0 ; i < M ; i++){
		int a,b;
		scanf("%d %d",&a,&b);

		printf("%d %d\n",getRangeMin(a-1,b-1,n),getRangeMax(a-1,b-1,n));
	}


	return 0;
}
*/
