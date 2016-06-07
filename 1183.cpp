/*
#include <cstdio>
#include <algorithm>

using namespace std;

int gap[10000];

int main(){
	int N;
	scanf("%d",&N);

	if(N%2) printf("1\n");
	else{
		for(int i = 0 ; i < N ; i++){
			int s,a;
			scanf("%d %d",&s,&a);
			gap[i] = s-a;
		}
		sort(gap,gap+N);
		printf("%d\n",gap[N/2]-gap[N/2-1]+1);
	}

	return 0;
}
*/
