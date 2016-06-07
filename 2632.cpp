/*
 * m,n <= 1000
 * s <= 2000000
 * m과 n 둘다 정렬
 * m 안에서 꿈틀, n 안에서 꿈틀
 * m과 n에서 meet in the middle
 *
 */

/*
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int s,m,n;
	scanf("%d %d %d",&s,&m,&n);

	vector<int> A(m),B(n);
	for(int i = 0 ; i < m ; i++) scanf("%d",&A[i]);
	for(int i = 0 ; i < n ; i++) scanf("%d",&B[i]);

	int count = 0;
	int front = 0 ,back = 0;
	int sum = 0;
	while(front < m || back < m){
		sum += A[back%m];
		while(sum >= s){
			if(sum == s) count++;
			sum -= A[front%m];
			front++;
			if(front >= m) break;
		}
		back++;
	}

	front = 0, back = 0;
	sum = 0;
	while(front < n || back < n){
		sum += B[back%n];
		while(sum >= s){
			if(sum == s) count++;
			sum -= B[front%n];
			front++;
			if(front >= n) break;
		}
		back++;
	}

	vector<int> AA,BB;
	bool first = true;
	for(int i = 0 ; i < m ; i++){
		int sum = 0;
		for(int j = 0 ; j < m ; j++){
			sum += A[(i+j)%m];
			if(first || j != m-1){
				AA.push_back(sum);
				if(j == m-1) first = false;
			}
		}
	}
	AA.push_back(0);

	first = true;
	for(int i = 0 ; i < n ; i++){
		int sum = 0;
		for(int j = 0 ; j < n ; j++){
			sum += B[(i+j)%n];
			if(first || j != n-1){
				BB.push_back(sum);
				if(j == n-1) first = false;
			}
		}
	}
	BB.push_back(0);

	sort(AA.begin(),AA.end());

	for(int x : BB){
		if(s-x < 0) continue;
		pair<vector<int>::iterator,vector<int>::iterator> range = equal_range(AA.begin(),AA.end(),s-x);
		count += range.second-range.first;
	}

	printf("%d\n",count);
	// 22172 / 683
	// meet in the middle 부분은 나중에
	// 먼저 원형 모양의 합을 전부다 구해서 벡터안에 넣어둬야한다.
	// 총 필요한 루프는 m*m 이랑 n*n
	// 구한 후 중복되는거 처리 또는 equal_range로 처리



	return 0;
}
*/
