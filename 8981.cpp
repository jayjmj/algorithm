/*
#include <cstdio>

int NUM[101];
int r[50];

int main(void){
	int N;
	scanf("%d", &N);
	int i;
	for(i = 0; i < N; i++) scanf("%d", &NUM[i]);

	int count = 0, from = 0, value;
	while(count < N){
		while(r[from] != 0){
			from = (from+1)%N;
		}
		r[from] = NUM[count];
		count++;
		from = (r[from]+from)%N;
	}

	printf("%d\n", N);
	for(i = 0; i < N; i++) printf("%d ", r[i]);

	return 0;
}
*/
