/*
#include <cstdio>
#include <cstring>

int cnt[26];

char S1[1000];
char S2[1000];

int main(){

	scanf("%s",S1);
	scanf("%s",S2);

	int len1 = strlen(S1);
	int len2 = strlen(S2);

	int anaCnt = 0;
	for(int i = 0 ; i < len1 ; i++) cnt[S1[i]-'a']++;
	for(int i = 0 ; i < len2 ; i++){
		if(cnt[S2[i]-'a'] > 0){
			cnt[S2[i]-'a']--;
			anaCnt++;
		}
	}

	printf("%d\n",len1-anaCnt+len2-anaCnt);

	return 0;
}
*/
