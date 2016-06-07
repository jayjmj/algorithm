/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const int &a,const int &b){
	return a>b;
}

int main(){
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);

	vector<int> A(N);
	for(int i = 0 ; i < N ; i++) scanf("%d",&A[i]);
	sort(A.begin(),A.end(),cmp);

	int cnt = 0;
	int total = M*K;
	for(int i = 0 ; i < N ; i++){
		cnt++;
		total -= A[i];
		if(total <= 0) break;
	}
	if(total <= 0) printf("%d",cnt);
	else printf("STRESS");

	return 0;
}
*/
