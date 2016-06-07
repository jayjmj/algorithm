/*
#include <cstdio>
#include <cstring>

bool chk[26];

int main(){
	int N;
	scanf("%d",&N);
	getchar();

	int cnt = N;
	for(int i = 0 ; i < N ; i++){
		memset(chk,0,sizeof(chk));

		bool ok = true;
		char c;
		char prevc=' ';
		while(scanf("%c",&c) == 1 && c != '\n'){
			if(chk[c-'a']){
				if(prevc != c){
					ok = false;
				}
			}
			chk[c-'a'] = true;
			prevc = c;
		}
		if(!ok) cnt--;
	}

	printf("%d\n",cnt);

	return 0;
}
*/
