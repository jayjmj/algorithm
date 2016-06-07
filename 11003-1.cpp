

// 2^을 이용한 다이나믹은 메모리 초과, sqrt decomposition은 시간초과

/*#include <cstdio>
#include <queue>
#include <map>

using namespace std;

int A[5000000];

int main(){

	int N,L;
	scanf("%d %d",&N,&L);

	map<int,int> m;
	priority_queue<int> q;
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&A[i]);

		if(i-L+1 >0){
			m[A[i-L]]--;
			int x = q.top();
			while(m[-x] <= 0){
				q.pop();
				x = q.top();
			}
		}
		q.push(-A[i]);
		if(m.find(A[i]) == m.end()) m[A[i]] = 1;
		else m[A[i]]++;

		int x = q.top();
		printf("%d ",-x);

	}

	return 0;
}*/


/*#include <cstdio>

int D[5000000][24];
int A[5000000];

int min(int a,int b){
	return a<b?a:b;
}

int getRangeMin(int a,int b){
	if(a < 0) a = 0;
	int gap = b - a;
	int square;
	for(square = 0 ; (1<<square) <= gap ; square++);
	square--;
	return min(D[a][square],D[b-(1<<square)+1][square]);
}

int main(){

	int N,L;
	scanf("%d %d",&N,&L);

	for(int i = 0 ; i < N ; i++){
		scanf("%d",&A[i]);
	}

	for(int j = 0 ; (1<<j) < N ; j++){
		for(int i = 0 ; i < N ; i++){
			if(j == 0){
				D[i][j] = A[i];
			}
			else{
				D[i][j] = min(D[i+(1<<(j-1))][j-1],D[i][j-1]);
			}
		}
	}

	for(int i = 0 ; i < N ; i++){
		printf("%d ",getRangeMin(i-L+1,i));
	}

	return 0;
}*/
