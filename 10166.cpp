/* 더 좋은 방법이 있을 것.!! 하지만, f[a][b]로 분수 a/b를 나타내는 법을 알았다!*/
/*
#include <cstdio>

bool frac[2001][2001];

int gcd(int a, int b){
	if(a==b||b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int D1,D2;
	scanf("%d %d",&D1,&D2);

	int count = 0;
	for(int i = D1 ; i <= D2 ; i++){
		for(int j = 1 ; j <= i ; j++){
			int cd = gcd(i,j);
			int s = j/cd;
			int m = i/cd;
			if(!frac[s][m]){
				frac[s][m]=true;
				count++;
			}
		}
	}

	printf("%d\n",count);

	return 0;
}

*/
