/*#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

typedef struct edge{
	int to;
	int cost;
} Edge;

int inf = 1000000000;
int D[1001];
bool C[1001];
vector<Edge> v[1001];
int p[1001];

void printDir(int start,int end){
	if(p[end] == start){
		printf("%d %d ",start,end);
		return;
	}
	else{
		printDir(start,p[end]);
		printf("%d ",end);
	}
}

int countDir(int start,int end){
	if(p[end] == start) return 2;
	else return 1 + countDir(start,p[end]);
}

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	int from,to,cost;
	for(int i = 0 ; i < m ; i++){
		scanf("%d %d %d",&from,&to,&cost);

		Edge e;
		e.to = to;
		e.cost = cost;

		v[from].push_back(e);
	}

	int startCity, endCity;
	scanf("%d %d",&startCity,&endCity);

	for(int i = 1 ; i <= n ; i++){
		D[i] = inf;
		C[i] = false;
		p[i] = i;
	}

	D[startCity] = 0;
	C[startCity] = true;
	int city = startCity;
	for(int i = 1 ; i <= n-1 ; i++){

		int size = v[city].size();
		for(int i = 0 ; i < size; i++){
			int from = city;
			int to = v[city][i].to;
			int cost = v[city][i].cost;

			if(D[to] > D[from] + cost){
				D[to] = D[from]+cost;
				p[to] = from;
			}
		}

		int minCost = inf;
		for(int i = 1 ; i <= n ; i++){
			if(!C[i] && minCost > D[i]){
				minCost = D[i];
				city = i;
			}
		}
		C[city] = true;
	}

	printf("%d\n",D[endCity]);
	printf("%d\n",countDir(startCity,endCity));
	printDir(startCity,endCity);

	return 0;
}*/
