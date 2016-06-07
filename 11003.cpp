/*#include <cstdio>
#include <queue>

using namespace std;

typedef struct arr{
	int idx;
	int num;

	arr(int _idx, int _num){
		idx = _idx;
		num = _num;
	}
} Arr;

int A[5000000];
int min[5000000];

int main(){

	int N,L;
	scanf("%d %d",&N,&L);

	for(int i = 0 ; i < N ; i++){
		scanf("%d",&A[i]);
	}

	deque<Arr> deq;
	for (int i=0; i<N; i++) {
		//window 크기 넘는거 빼기
		if (!deq.empty() && deq.front().idx < i-L+1) {
			deq.pop_front();
		}
		//필요없는거 빼기
		while (!deq.empty() && deq.back().num > A[i]) {
			deq.pop_back();
		}
		//넣기
		deq.push_back(Arr(i, A[i]));

		printf("%d ",deq.front().num);
	}

	return 0;
}*/
