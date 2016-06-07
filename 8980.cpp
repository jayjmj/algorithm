/*
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef struct tp{
	int s,d;
	int nBox;
	tp(int _s,int _d,int _nBox){
		s=_s;d=_d;nBox=_nBox;
	}
	bool operator<(const tp &a) const {return d < a.d;}

}TP;

bool cmp(const tp &a, const tp &b){
	if(a.s == b.s) return a.d > b.d;
	return a.s < b.s;
}

int g[2001];

int main(){
	int N,C;
	scanf("%d %d",&N,&C);

	int M;
	scanf("%d",&M);

	int tot = 0;
	int s,d,nBox;
	vector<TP> v;
	for(int i = 0 ; i < M ; i++){
		scanf("%d %d %d",&s,&d,&nBox);
		v.push_back(TP(s,d,nBox));
		tot += nBox;
		g[s] += nBox;
		g[d] -= nBox;
	}

	sort(v.begin(),v.end(),cmp);

	g[1] -= C; g[N] += C;
	for(int i = 1 ; i <= N ; i++) g[i] += g[i-1];

	int k = 0;
	priority_queue<TP> q;
	for (int i=1; i<=N; i++) {
		while (k < M && v[k].s <= i) {
			q.push(v[k]);
			k++;
		}
		while (g[i] > 0) {
			TP t = q.top();
			q.pop();
			int dx = min(t.nBox,g[i]);
			for (int j=i; j<t.d; j++) {
				g[j] -= dx;
			}
			tot -= dx;
			t.nBox -= dx;
			if(t.nBox > 0) q.push(t);
		}
	}
	printf("%d",tot);


	return 0;
}
*/
