/*

D[i][j]에서 j에 대한 정보가 i에 포함되어있으면 j는 필요없다.. 이 문제에서도 D[i][j]가 아닌 D[i]로만으로도 풀수 있었다;

#include <cstdio>
#include <cstring>

using namespace std;

int cost[17][17];
int D[(1<<16)][17];

int min(int a,int b){ return a<b?a:b; }

int countOnPlant(int a){
	if(a == 0) return 0;
	else{
		if(a&1) return 1+countOnPlant(a>>1);
		else return countOnPlant(a>>1);
	}
}

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			scanf("%d",&cost[i][j]);
		}
	}
	getchar();

	char c;
	int onCnt = 0; int status = 0;
	for(int i = 0 ; i < N ; i++){
		scanf("%c",&c);
		if(c == 'Y'){
			onCnt++;
			status += (1<<i);
		}
	}

	int P;
	scanf("%d",&P);

	if(P <= onCnt){
		printf("0\n");
		return 0;
	}

	memset(D,-1,sizeof(D));
	if(status != 0) D[status][onCnt] = 0;

	for(int i = onCnt ; i < N ; i++){
		for(int j = 0 ; j < (1<<N) ; j++){
			if(D[j][i] != -1){ // 진행 상태
				for(int k = 0 ; k < N ; k++){
					if(!(j & (1<<k))){ // 불이 꺼져있는 곳을 확인
						int minCost = 51;
						for(int l = 0 ; l < N ; l++){
							if(j & (1<<l)){ // 불이 켜져있는 곳중에 하나를 선택
								if(minCost > cost[l+1][k+1]) minCost = cost[l+1][k+1]; // 가장 적은 코스트를 찾음
							}
						}
						if(D[j | (1<<k)][i+1] != -1) D[j | (1<<k)][i+1] = min(D[j | (1<<k)][i+1],D[j][i] + minCost);
						else D[j | (1<<k)][i+1] = D[j][i] + minCost;
					}
				}
			}
		}

	}

	int minCost = -1;
	for(int i = 0 ; i < (1<<N) ; i++){
		if(countOnPlant(i) == P){
			int cost = D[i][P];
			if(cost != -1){
				if(minCost == -1) minCost = cost;
				else minCost = min(minCost, cost);
			}
		}
	}
	printf("%d\n",minCost);

	return 0;
}*/
