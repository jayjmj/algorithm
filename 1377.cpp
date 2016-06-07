/*

#include <cstdio>
#include <queue>

using namespace std;

struct nid{
	int num;
	int idx;
	nid(int _n, int _idx){
		num = _n, idx = _idx;
	}

	bool operator< (const nid a) const{
		if(num == a.num) return idx > a.idx;
		return num > a.num;
	}
};

int main(){
	int N;
	scanf("%d",&N);

	int num;
	priority_queue<nid> pq;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&num);
		pq.push(nid(num,i));
	}

	int max = 0;
	int idx = 0;
	while(!pq.empty()){
		idx++;
		nid x = pq.top();pq.pop();
		if(idx < x.idx){
			int gap = x.idx - idx;
			if(max < gap) max = gap;
		}
	}

	printf("%d\n",max+1);

	return 0;
}
*/
