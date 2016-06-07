/*#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> v[10001];
int SCC[10001];
int sccIdx;
vector<vector<int> > ans;

int min(int a, int b){return a<b?a:b;}

bool cmp(const vector<int> &a, const vector<int> &b){
	return a.at(0) < b.at(0);
}

stack<int> s;
int idx[10001];
int curIdx;
int strongConnect(int a){
	s.push(a);
	idx[a] = ++curIdx;
	int lowlink = idx[a];

	int size = v[a].size();
	for(int i = 0 ; i < size; i++){
		int b = v[a][i];
		if(idx[b] == 0) lowlink = min(lowlink, strongConnect(b));
		else if(!SCC[b]) lowlink = min(lowlink, idx[b]);
	}

	if(lowlink == idx[a]){
		sccIdx++;
		while(true){
			int b = s.top();
			s.pop();
			SCC[b] = sccIdx;
			if(b == a) break;
		}
	}

	return lowlink;
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	// make graph using adjacency list
	for(int i = 0 ; i < M ; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
	}

	// get scc
	for(int i = 1 ; i <= N ; i++){
		if(idx[i] == 0){
			strongConnect(i);
		}
	}

	// print ans
	ans.resize(sccIdx+1);
	for(int i = 1; i <= N ; i++){
		ans[SCC[i]].push_back(i);
	}
	sort(ans.begin()+1, ans.end(),cmp);

	printf("%d\n",sccIdx);
	for(int i = 1 ; i <= sccIdx ; i++){
		int size = ans[i].size();
		for(int j = 0 ; j < size ; j++){
			printf("%d ",ans[i][j]);
		}
		printf("-1\n");
	}

	return 0;
}*/
