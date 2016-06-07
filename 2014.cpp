/*
#include <cstdio>
#include <queue>

using namespace std;

int prime[100];
const int limit = 2147483647;

int main(){

	int K,N;
	scanf("%d %d",&K,&N);

	priority_queue<int> pq;
	for(int i = 0 ; i < K ; i++){
		scanf("%d",&prime[i]);
		pq.push(-prime[i]);
	}

	int ans = 0;
	int idx = 0;
	while(!pq.empty()){
		idx++;
		int num = -pq.top();
		pq.pop();

		if(idx == N){
			ans = num;
			break;
		}

		for(int i = K-1 ; i >= 0 ; i--){
			long long p = (long long)prime[i]*num;
			if(p <= limit) pq.push(-p);
			if(num%prime[i] == 0) break;
		}
	}

	printf("%d\n",ans);

	return 0;
}
*/
