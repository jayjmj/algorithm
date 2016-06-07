/*#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int indegree[501] = {0};
int workhour[501];
int workhourS[501] = {0};
vector<int> v[501];

int main(){

	int N;
	scanf("%d",&N);

	int wh;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&wh);
		workhour[i] = wh;

		int pre;
		while(scanf("%d",&pre)==1 && pre != -1){
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

	for(int i = 1 ; i <= N ; i++){
		printf("%d\n",workhourS[i]);
	}


	return 0;
}*/
