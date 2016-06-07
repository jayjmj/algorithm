// 하나의 독립적인 작업이 혼자 오래걸리는 경우의 케이스를 검사!
/*#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int workhour[10001];
int workhourS[10001] = {0};
int indegree[10001]={0};
vector<int> v[10001];

int main(){

	int N;
	scanf("%d",&N);

	int preCnt;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d %d",&workhour[i],&preCnt);

		int pre;
		for(int j = 0 ; j < preCnt ; j++){
			scanf("%d",&pre);

			v[pre].push_back(i);
			indegree[i]++;
		}
	}

	queue<int> q;
	for(int i = 1 ; i <= N ; i++){
		if(indegree[i] == 0){
			q.push(i);
			workhourS[i] = workhour[i];
		}
	}


	while(!q.empty()){
		int x = q.front();
		q.pop();

		int size = v[x].size();
		for(int i = 0 ; i < size ; i++){
			indegree[v[x][i]]--;
			if(workhourS[v[x][i]] < workhourS[x] + workhour[v[x][i]]) workhourS[v[x][i]] = workhourS[x] + workhour[v[x][i]];
			if(indegree[v[x][i]] == 0){
				q.push(v[x][i]);
			}
		}
	}

	int max = 0;
	for(int i = 0 ; i <= N ; i++){
		if(max < workhourS[i]) max = workhourS[i];
	}
	printf("%d\n",max);

	return 0;
}*/
