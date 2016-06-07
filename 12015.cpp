/*
#include <cstdio>
#include <algorithm>

int D[1000000];

int main(){
	int N;
	scanf("%d",&N);

	int end = 0;
	int num;
	for(int i = 1; i <= N ; i++){
		scanf("%d",&num);

		int loc = std::lower_bound(D,D+end,num)-D;
		D[loc] = num;
		if(loc == end) end++;
	}
	printf("%d",end);

	return 0;
}
*/
