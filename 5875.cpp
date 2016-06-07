/*
#include <cstdio>
#include <cstring>

char s[100001];

int main(){

	scanf("%s",s);

	int cls = 0;
	int len = strlen(s);
	for(int i = 0 ; i < len ; i++){
		if(s[i] == '(') cls++;
		else cls--;
	}

	int cnt = 0;
	if(cls > 0){// '(' > ')'
		int valid = 0;
		for(int i = len-1 ; i >= 0 ; i--){
			if(s[i]=='('){
				cnt++;
				valid++;
			}
			else valid--;
			if(valid > 0) break;
		}
		printf("%d\n",cnt);
	}
	else if(cls < 0){ // ')' > '('
		int valid = 0;
		for(int i = 0 ; i < len ; i++){
			if(s[i]=='(') valid++;
			else{
				cnt++;
				valid--;
			}
			if(valid < 0)	break;
		}
		printf("%d\n",cnt);
	}
	else{
		printf("0\n");
	}

	return 0;
}
*/
