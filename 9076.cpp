/*
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int T;
	scanf("%d",&T);

	int A[5];
	for(int t = 1; t <= T ; t++){
		for(int i = 0 ; i < 5 ; i++) scanf("%d",&A[i]);
		sort(A,A+5);

		if(A[3]-A[1] >= 4) printf("KIN\n");
		else printf("%d\n",A[1]+A[2]+A[3]);
	}

	return 0;
}
*/
