/*
#include <cstdio>

int main(){

	freopen("input.txt","r",stdin);

	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		int M;
		char type;
		scanf("%d %c",&M,&type);
		getchar();

		if(type == 'C'){
			for(int i = 0 ; i < M ; i++){
				char c;
				scanf("%c ",&c);
				printf("%d ",c-'A'+1);
			}
		}
		else if(type == 'N'){
			for(int i = 0 ; i < M ; i++){
				int n;
				scanf("%d ",&n);
				printf("%c ",'A'+n-1);
			}
		}
		printf("\n");
	}

	return 0;
}
*/
