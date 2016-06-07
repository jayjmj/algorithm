/*
#include <cstdio>

int m1152(){

	char c;
	int count = 0;
	bool alpha = false;
	bool lastEmpty = true;
	while((scanf("%c", &c) == 1) && c != '\n' && c != EOF){
		if(c == ' '){
			if(alpha) count++;
			alpha = false;
			lastEmpty = true;
		}
		else{
			alpha = true;
			lastEmpty = false;
		}
	}

	if(lastEmpty) printf("%d\n",count);
	else printf("%d\n",count+1);

	return 0;
}
*/
