/*#include <cstdio>
#include <queue>

using namespace std;

int volume[1001];
int control[101];

int main(){

	int N,S,M;
	scanf("%d %d %d",&N,&S,&M);

	for(int i = 1; i <= N ; i++){
		scanf("%d",&control[i]);
	}

	int idx = 0;
	queue<int> q;
	q.push(S);
	volume[S] = idx;


	while(!q.empty()){
		int qSize = q.size();
		idx++;

		int vol = control[idx];
		for(int i = 0 ; i < qSize; i++){
			int x = q.front();
			q.pop();

			if(x - vol >= 0){
				if(volume[x-vol] != idx) q.push(x-vol);
				volume[x-vol] = idx;
			}
			if(x + vol <= M){
				if(volume[x+vol] != idx) q.push(x+vol);
				volume[x+vol] = idx;
			}
		}

		if(idx == N) break;
	}

	int maxVol = -1;
	for(int i = 0 ; i <= M ; i++){
		if(volume[i] == N) maxVol = i;
	}

	if(maxVol == -1) printf("-1\n");
	else printf("%d\n",maxVol);


	return 0;
}*/
