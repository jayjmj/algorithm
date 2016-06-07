/* %lld 대신 %d로 출력해서, 음수 정답이 나오고 있었음 ㅠ

#include <cstdio>
#include <queue>

using namespace std;

int A[101];
long long D[21][100];

int main(){

	int N;
	scanf("%d",&N);

	for(int i =0 ; i < N ; i++){
		scanf("%d",&A[i]);
	}

	int start = A[0];
	D[start][0] = 1;
	queue<int> q;
	q.push(start);

	int idx = 1;
	while(!q.empty()){
		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			int x = q.front();
			q.pop();

			int npx = x + A[idx];
			int nnx = x - A[idx];
			if(npx <= 20){
				if(D[npx][idx] == 0) q.push(npx);
				D[npx][idx] += D[x][idx-1];
			}
			if(nnx >= 0){
				if(D[nnx][idx] == 0) q.push(nnx);
				D[nnx][idx] += D[x][idx-1];
			}
		}
		idx++;
		if(idx == N-1) break;
	}

	printf("%lld\n",D[A[N-1]][N-2]);

	return 0;
}*/
