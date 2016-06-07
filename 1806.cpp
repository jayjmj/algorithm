/*
#include <cstdio>

int A[100000];
const int inf = 100000;

int main(){
	int N,S;
	scanf("%d %d",&N,&S);

	for(int i = 0 ; i < N ; i++) scanf("%d",&A[i]);

	int min = inf;
	int sum = 0;
	int i = 0, j = 0;
	while(j < N || sum >= S){
		if(sum >= S){
			if(min > j-i) min = j-i;
			sum -= A[i];
			i++;
		}
		else{
			sum += A[j];
			j++;
		}
	}

	if(min == inf) printf("0\n");
	else printf("%d\n",min);

	return 0;
}
*/
