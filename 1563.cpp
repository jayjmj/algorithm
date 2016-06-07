/*#include <cstdio>

int D[1001][9];

const int OO = 0;
const int AO = 1;
const int LO = 2;
const int OL = 3;
const int AL = 4;
const int OA = 5;
const int AA = 6;
const int LA = 7;
const int LAA = 8;

const int mod = 1000000;

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		if(i == 1){
			D[i][OO] = 1;
			D[i][AO] = 0;
			D[i][LO] = 0;
			D[i][OL] = 1;
			D[i][AL] = 0;
			D[i][OA] = 1;
			D[i][AA] = 0;
			D[i][LA] = 0;
			D[i][LAA] = 0;
		}
		else{
			D[i][OO] = (D[i-1][OO]+D[i-1][AO])%mod;
			D[i][AO] = (D[i-1][OA]+D[i-1][AA])%mod;
			D[i][LO] = (D[i-1][LO]+D[i-1][OL]+D[i-1][AL]+D[i-1][LA]+D[i-1][LAA])%mod;
			D[i][OL] = (D[i-1][OO]+D[i-1][AO])%mod;
			D[i][AL] = (D[i-1][OA]+D[i-1][AA])%mod;
			D[i][OA] = (D[i-1][OO]+D[i-1][AO])%mod;
			D[i][AA] = D[i-1][OA];
			D[i][LA] = (D[i-1][LO]+D[i-1][OL]+D[i-1][AL])%mod;
			D[i][LAA] = D[i-1][LA];
		}
	}

	int ans = 0;
	for(int i = 0 ; i < 9 ; i++){
		ans = (ans + D[N][i])%mod;
	}

	printf("%d",ans);


	return 0;
}*/

/* 다른 사람 소스 : 어떻게 한거지...ㄷㄷ

#include<cstdio>
typedef long long ll;
ll d[1001];

int
main()
{
    int n;
    scanf("%d",&n);
    d[0]=1;
    d[1]=2;
    d[2]=4;
    for(int i=3; i<=n; i++)
        d[i]=(d[i-1]+d[i-2]+d[i-3])%1000000;
    ll ans=d[n];
    for(int i=0; i<n; i++)
        ans=(ans+d[i]*d[n-i-1])%1000000;
    printf("%lld",ans);
    return 0;
}*/
