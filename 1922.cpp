/*#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int p[1001];

typedef struct edge{
	int from,to,cost;
} Edge;

bool cmp(const Edge &a, const Edge &b){
	return a.cost < b.cost;
}

vector<Edge> v;

int Find(int x){
	if(x == p[x]) return x;
	else return p[x] = Find(p[x]);
}

void Union(int a, int b){
	int x = Find(a);
	int y = Find(b);

	p[a] = b;
}

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	Edge e;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d %d",&e.from,&e.to,&e.cost);

		v.push_back(e);
	}

	sort(v.begin(),v.end(),cmp);

	for(int i = 1 ; i <= N ; i++){
		p[i] = i;
	}

	int totalCost = 0;
	int size = v.size();
	for(int i = 0 ; i < size ; i++){
		int x = Find(v[i].from);
		int y = Find(v[i].to);

		if(x != y){
			Union(x,y);
			totalCost += v[i].cost;
		}
	}

	printf("%d\n",totalCost);

	return 0;
}*/
