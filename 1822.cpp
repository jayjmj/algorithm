/*
#include <cstdio>
#include <set>

using namespace std;

int main(){

	int nA,nB;
	scanf("%d %d",&nA,&nB);

	int elem;
	set<int> A;
	for(int i = 0 ; i < nA ; i++){
		scanf("%d",&elem);
		A.insert(elem);
	}

	for(int i = 0 ; i < nB ; i++){
		scanf("%d",&elem);
		A.erase(elem);
	}

	printf("%d\n",A.size());
	for(set<int>::iterator it = A.begin() ; it != A.end() ; it++){
		printf("%d ",*it);
	}

	return 0;
}
*/
