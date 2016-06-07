/*
#include <cstdio>
#include <algorithm>

using namespace std;

int A[50];
int B[50];

bool cmp(int a,int b){
	return a>b;
}

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 0 ; i < N ; i++) scanf("%d",&A[i]);
	for(int i = 0 ; i < N ; i++) scanf("%d",&B[i]);

	sort(A,A+N);
	sort(B,B+N,cmp);

	int ans = 0;
	for(int i = 0 ; i < N ; i++) ans += A[i]*B[i];

	printf("%d\n",ans);

	return 0;
}
*/
