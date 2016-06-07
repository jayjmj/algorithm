/*
#include <cstdio>
#include <cstring>

int calc(int xx[], int xy[]){
	int L = xx[0]+xy[0];
	int O = xx[1]+xy[1];
	int V = xx[2]+xy[2];
	int E = xx[3]+xy[3];

	return ((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E))%100;
}

void count(char name[],int cnt[]){
	int len = strlen(name);
	for(int i = 0 ; i < len ; i++){
		if(name[i] == 'L') cnt[0]++;
		else if(name[i] == 'O') cnt[1]++;
		else if(name[i] == 'V') cnt[2]++;
		else if(name[i] == 'E') cnt[3]++;
	}
}

int main(){
	char name[21];
	scanf("%s",name);
	int xx[] = {0,0,0,0};
	count(name,xx);

	int N;
	scanf("%d",&N);

	char temp[21],feName[21];
	int max = -1;
	for(int i = 0 ; i < N ; i++){
		scanf("%s",feName);
		int xy[] = {0,0,0,0};
		count(feName,xy);

		int score = calc(xx,xy);
		if(max < score){
			max = score;
			strcpy(temp,feName);
		}
		else if(max == score){
			if(strcmp(temp,feName) > 0){
				strcpy(temp,feName);
			}
		}
	}
	printf("%s",temp);

	return 0;
}
*/
