/* 테스트 케이스에서 답이 다 맞는데, 제출은 틀리다고 하면, int의 범위를 넘어섰는지 확인해본다.ㅠㅠ
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		int n;
		scanf("%d",&n);

		int px = 0, nx;
		vector<int> A;
		vector<int> B;
		for(int i = 1 ; i <= n ; i++){
			scanf("%d",&nx);
			if(px > nx){
				B.push_back(nx);
			}
			else{
				A.push_back(nx);
				px = nx;
			}
		}

		long long totalCnt = 0;
		int bSize = B.size();
		for(int i = 0 ; i < bSize ; i++){
			int x = B[i];
			int aSize = A.size();

			long long cnt = 0;
			int pj = -1;
			long long pjN = 1;
			for(int j = 0 ; j < aSize ; j++){
				if(A[j] < x){
					if(pj == A[j]){
						cnt += 1+(pjN-1)/2;
					}
					else{
						cnt += 1+cnt;
						pj = A[j];
						pjN = cnt;
					}
				}
			}
			cnt++;
			A.push_back(x);
			sort(A.begin(),A.end());
			totalCnt += cnt;
		}

		printf("%lld\n",totalCnt);
		A.clear();
		B.clear();
	}


	return 0;
}
*/
