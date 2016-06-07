/*

웜홀을 제외한 도로는 양방향 이동이 가능함!!

아래 케이스에 대해 가능한지 확인
1
3 2 1
2 1 3
1 3 1
2 3 5


 */

/*
#include <cstdio>
#include <vector>

using namespace std;

int D[501];
const int inf = 1000000000;

typedef struct edge{
	int from,to,cost;
} Edge;

int main(){

	int T;
	scanf("%d",&T);

	int N,M,W;
	for(int test_case = 1 ; test_case <= T ; test_case++){
		scanf("%d %d %d",&N,&M,&W);

		int S,E,T;
		vector<Edge> v(2*M+W);
		for(int i = 0 ; i < 2*M+W ; i++){
			if(i < 2*M){
				scanf("%d %d %d",&S,&E,&T);

				v[i].from = S;
				v[i].to = E;
				v[i].cost = T;
				v[i+1].from = E;
				v[i+1].to = S;
				v[i+1].cost = T;

				i++;

			}
			else{
				scanf("%d %d %d",&v[i].from,&v[i].to,&v[i].cost);
				v[i].cost = -v[i].cost;
			}
		}

		for(int i = 1 ; i <= N ; i++){
			D[i] = inf;
		}

		D[1] = 0;
		bool isCycle = false;
		for(int i = 1 ; i <= N ; i++){
			for(int j = 0 ; j < 2*M+W ; j++){
				int from = v[j].from;
				int to = v[j].to;
				int cost = v[j].cost;

				if(D[from] != inf && D[from]+cost < D[to]){
					D[to] = D[from]+cost;
					if(i == N) isCycle = true;
				}
			}
		}


		if(isCycle) printf("YES\n");
		else{
			if(D[1] != 0) printf("YES\n");
			else printf("NO\n");
		}

	}



	return 0;
}
*/
