/*
#include <cstdio>
#include <map>

using namespace std;

int max(int a,int b){return a>b?a:b;}

int main(){
	int n;
	scanf("%d",&n);

	long long sum = 0;
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		int num;
		scanf("%d",&num);

		int score;
		map<int,int>::iterator pos = m.lower_bound(num);
		if(i == 0){
			score = 0;
		}
		else if(pos == m.begin()){
			score = pos->second + 1;
		}
		else if(pos == m.end()){
			score = (--pos)->second + 1;
		}
		else{
			score = max((--pos)->second,pos->second) + 1;
		}
		m[num] = score;
		sum += score;
		printf("%lld\n",sum);
	}

	return 0;
}
*/
