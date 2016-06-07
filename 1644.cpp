/*
#include <cstdio>
#include <vector>

using namespace std;

bool notPrime[4000001];
vector<int> prime;

int main(){
	int N;
	scanf("%d",&N);

	notPrime[0] = true, notPrime[1] = true;
	for(int i = 2 ; i <= N ; i++){
		if(notPrime[i]) continue;

		prime.push_back(i);
		for(int j = i*2 ; j <= N ; j+=i){
			notPrime[j] = true;
		}
	}

	int j = 0, sum = 0;
	int count = 0;
	int size = prime.size();
	for(int i = 0 ; i < size ; i++){
		sum += prime[i];
		while(sum >= N){
			if(sum == N) count++;
			sum -= prime[j];
			j++;
		}
	}

	printf("%d\n",count);

	return 0;
}
*/
