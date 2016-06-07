/*
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

typedef struct stick{
	int s,t;
	stick(){s=0;t=0;}
	stick(int _s,int _t){
		s=_s;t=_t;
	}
} Stick;

bool cmp(const Stick &a, const Stick &b){
	if(a.s == b.s) return a.t < b.t;
	return a.s < b.s;
}

long long max(long long a, long long b){ return a>b?a:b;}

int main(){
	int N,L;
	scanf("%d %d",&N,&L);

	int s,t;
	vector<Stick> v(N+1);
	for(int i = 1 ; i <= N ; i++){
		scanf("%d %d",&s,&t);
		v[i] = Stick(s,t);
	}

	sort(v.begin(),v.end(),cmp);

	map<int,long long> m1,m2;
	long long v1,v2;
	long long ans = 0;
	for(int i = 1; i <= N ;i++){
		if(m1.find(v[i].s) == m1.end()) v1 = abs(v[i].s-v[i].t) + L;
		else v1 = abs(v[i].s-v[i].t) + L + m1[v[i].s];
		if(m2.find(v[i].t) == m2.end()) v2 = abs(v[i].s-v[i].t) + L;
		else v2= abs(v[i].s-v[i].t) + L + m2[v[i].t];

		if(m1.find(v[i].s) == m1.end() || m1[v[i].s] < v2) m1[v[i].s] = v2;
		if(m2.find(v[i].t) == m2.end() || m2[v[i].t] < v1) m2[v[i].t] = v1;

		ans = max(ans, max(v1,v2));
	}

	printf("%lld\n",ans);

	return 0;
}
*/
