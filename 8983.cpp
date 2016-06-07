/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int M,N,L;
	scanf("%d %d %d",&M,&N,&L);

	vector<int> t(M);
	for(int i = 0 ; i < M ; i++) scanf("%d",&t[i]);
	sort(t.begin(),t.end());

	int nT = t.size();
	int count = 0;
	int left,right;
	for(int i = 0 ; i < N ; i++){
		int a,b;
		scanf("%d %d",&a,&b);

		left = lower_bound(t.begin(),t.end(),a+b-L)-t.begin();
		right = upper_bound(t.begin(),t.end(),a-b+L)-t.begin();

		if(left < right) count++;
	}

	printf("%d\n",count);

	return 0;
}
*/
