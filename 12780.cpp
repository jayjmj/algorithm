/*
#include <cstdio>
#include <cstring>

int count[26];

int main(){
	char H[100001];
	scanf("%s",H);
	int len = strlen(H);
	for(int i = 0 ; i < len ; i++){
		count[H[i]-'A']++;
	}

	int ans = 0;
	char N[11];
	scanf("%s",N);
	int queryLen = strlen(N);
	for(int i = 0 ; i < queryLen ; i++){
		ans += count[N[i]-'A'];
	}


	printf("%d\n",ans);

	return 0;
}
*/
