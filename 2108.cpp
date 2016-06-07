/*
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int freq[8001];

int main(){

	int N;
	scanf("%d",&N);

	int num;
	int min,max;
	int total = 0;
	int avg, many, center = 0;
	priority_queue<int> q;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&num);
		total += num;
		q.push(-num);
		freq[num+4000]++;
	}

	avg = total/N; // 평균
	if(total < 0){
		if((total%N+N) < N-(total%N+N)) avg--;
	}
	else{
		if(total%N >= N-total%N) avg++;
	}

	int m = 0;
	vector<int> s;
	for(int i = 1 ; i <= N ; i++){
		int x = -q.top();q.pop();

		if(i == 1) min = x; // 최소
		if(i == N) max = x; // 최대
		if(i == N/2+1) center = x; // 중앙값

		if(m < freq[x+4000]){
			m = freq[x+4000];
			many = x;
			s.clear();
			s.push_back(x);
		}
		else if(m == freq[x+4000]){
			if(many != x){
				m = freq[x+4000];
				many = x;
				s.push_back(x);
			}
		}
	}

	if(s.size() > 1) many = s[1];

	printf("%d\n",avg);
	printf("%d\n",center);
	printf("%d\n",many);
	printf("%d\n",max-min);

	return 0;
}*/
