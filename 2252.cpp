/*#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[32001];
int indegree[32001] = {0};
int check[32001] = {0};

void topoSort(queue<int> q){

	while(!q.empty()){
		int x = q.front();
		q.pop();
		check[x] = 1;
		printf("%d ",x);

		int size = v[x].size();
		for(int i = 0 ; i < size ; i++){
			indegree[v[x][i]] --;
			if(indegree[v[x][i]] == 0){
				q.push(v[x][i]);
			}
		}
	}

}


int m2252(){

	int N,M;
	scanf("%d %d",&N,&M);

	int s1,s2;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d",&s1,&s2);
		v[s1].push_back(s2);
		indegree[s2]++;
	}

	queue<int> q;
	for(int i = 1 ; i <= N ; i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}

	topoSort(q);

	return 0;
}*/
