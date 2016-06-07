/*#include <cstdio>
#include <cmath>
#include <cstring>

int m11723(){

	int M;
	scanf("%d",&M);

	int set = 0;
	int elem;
	char operation[7];
	for(int i = 0 ; i < M ; i++){

		scanf("%s %d",operation,&elem);
		elem = elem - 1;

		if(strcmp(operation,"add") == 0){
			set = set | (1<<elem);
		}
		else if(strcmp(operation,"remove") == 0){
			set = set & ~(1<<elem);
		}
		else if(strcmp(operation,"check") == 0){
			if((set & (1<<elem)) > 0) printf("1\n");
			else printf("0\n");
		}
		else if(strcmp(operation,"toggle") == 0){
			set = set ^ (1<<elem);
		}
		else if(strcmp(operation,"all") == 0){
			set = (1<<20) - 1;
		}
		else if(strcmp(operation,"empty") == 0){
			set = 0;
		}
	}

	return 0;
}*/
