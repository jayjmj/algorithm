//주소값을 저장해서, 가장 긴 부분 수열 문제로 풀려고 했으나, 경로 출력부분에서 문제 발생 / 해결방법은 있으나, 더 효율적으로 구현하기 위해 포기.
/*#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int swi[10001];
int link[10001];
int D[10001];
int A[10001];
int p[10001];

vector<int> ans;

void printLink(int end){
	if(end == 0) return;
	else{
		ans.push_back(A[end]);
		printLink(p[end]);
	}
}

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&A[i]);
		swi[A[i]] = i;
	}

	for(int i = 1 ; i <= N ; i++){
		int num;
		scanf("%d",&num);
		link[swi[num]] = i;
	}

	for(int i = 1 ; i <= N ; i++){
		D[i] = 1;
		for(int k = 0; k < i ; k++){
			if(link[i] > link[i-k]){
				if(D[i] < D[i-k]+1){
					p[i] = i-k;
					D[i] = D[i-k]+1;
				}
			}
		}
	}

	int max = 0, end;
	for(int i = 1 ; i <= N ; i++){
		if(max < D[i]){
			max = D[i];
			end = i;
		}
	}

	printf("%d\n",max);
	printLink(end);
	sort(ans.begin(),ans.end());
	int size = ans.size();
	for(int i = 0 ; i < size ; i++){
		printf("%d ",ans[i]);
	}

	return 0;
}*/
