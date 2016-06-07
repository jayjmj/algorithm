/*
#include <cstdio>
#include <queue>

using namespace std;

int m11279(){

	int N;
	scanf("%d",&N);

	priority_queue<int> q;

	int n;
	while(N--){
		scanf("%d",&n);
		n = -n;

		if(n == 0){
			if(!q.empty()){
				printf("%d\n",-q.top());
				q.pop();
			}
			else{
				printf("0\n");
			}
		}
		else{
			q.push(n);
		}
	}

	return 0;
}
*/
