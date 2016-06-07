/*
#include <cstdio>

int main(){

	int indent = 0;
	char c;
	bool in = false;
	while(scanf("%c",&c) == 1 && c != '\n'){
		if(c == '{'){
			if(in) printf("\n");
			for(int i = 0 ; i < indent ; i++) printf(" ");
			printf("%c\n",c);
			indent+=2;
			in = false;
		}
		else if(c == '}'){
			if(in) printf("\n");
			indent-=2;
			for(int i = 0 ; i < indent ; i++) printf(" ");
			printf("%c",c);
			in = true;
		}
		else{
			if(!in) for(int i = 0 ; i < indent ; i++) printf(" ");
			printf("%c",c);
			if(c != ',') in = true;
			else{
				printf("\n");
				in = false;
			}
		}
	}

	return 0;
}
*/
