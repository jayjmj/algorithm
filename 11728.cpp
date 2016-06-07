/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	vector<int> A(N);
	vector<int> B(M);

	for(int i = 0 ; i < N ; i++) scanf("%d",&A[i]);
	for(int i = 0 ; i < M ; i++) scanf("%d",&B[i]);
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());

	int a = 0, b = 0;
	while(a < N && b < M){
		if(A[a] > B[b]){
			printf("%d ",B[b]);
			b++;
		}
		else{
			printf("%d ",A[a]);
			a++;
		}
	}
	for(int i = a ; a < N ; a++){
		printf("%d ",A[a]);
	}
	for(int i = b ; b < M ; b++){
		printf("%d ",B[b]);
	}

	return 0;
}
*/
