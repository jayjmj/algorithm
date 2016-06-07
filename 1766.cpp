/*#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[32001];
int indegree[32001] = {0};

void topolSort(priority_queue<int> q){

	while(!q.empty()){

		int x = -q.top();
		q.pop();

		printf("%d ",x);

		int size = v[x].size();
		for(int i = 0 ; i < size ; i++){
			indegree[v[x][i]]--;
			if(indegree[v[x][i]] == 0){
				q.push(-v[x][i]);
			}
		}


	}

}

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	int p1,p2;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d",&p1,&p2);

		v[p1].push_back(p2);
		indegree[p2]++;
	}

	priority_queue<int> q;
	for(int i = 1 ; i <= N ; i++){
		if(indegree[i] == 0) q.push(-i);
	}

	topolSort(q);


	return 0;
}*/
