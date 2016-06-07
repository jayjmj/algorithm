/*
#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	vector<int> p;
	for(int i = 1 ; i <= N ; i++) p.push_back(i);
	int cur = 0;
	printf("<");
	while(p.size() != 0){
		cur = (cur + M - 1) % p.size();
		printf("%d",p[cur]);
		p.erase(p.begin()+cur);
		if(p.size() != 0) printf(", ");
	}
	printf(">");

	return 0;
}
*/
