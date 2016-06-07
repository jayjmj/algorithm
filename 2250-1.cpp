/*
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

vector<int> t[10001];
int minInLv[10001];
int maxInLv[10001];
int parent[10001];

const int inf = 10001;

int bfs(int src){

	queue<int> q;
	q.push(src);

	while(!q.empty()){

		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			int x = q.front();
			q.pop();

			int size = t[x].size();
			for(int j = 0 ; j < size ; j++){
				t[x][j]
			}
		}

	}



}

int main(){

	int N;
	scanf("%d",&N);

	int p,l,r;
	for(int i = 1 ; i <= N ; i++){
		scanf("%d %d %d",&p,&l,&r);

		t[p].push_back(l);
		t[p].push_back(r);
		if(l>0) parent[l]=p;
		if(r>0) parent[r]=p;
	}

	int root;
	for(int i = 1 ; i<= N ; i++){
		if(parent[i] == 0) root = i;
	}

	memset(minInLv,inf,sizeof(minInLv));
	bfs(root);




	return 0;
}
*/

/*#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

vector<int> v[10001];
int L[10001];
int S[10001];
int B[10001];
int Parent[10001];

vector<int> inorder(int start){
	int current = start;
	stack<int> s;
	bool done = false;
	vector<int> inord;
	L[start] = 1;

	while(!done){

		if(current != -1){
			s.push(current);
			if(v[current][0] != -1) L[v[current][0]] = L[current]+1;
			current = v[current][0];

		}
		else{
			if(!s.empty()){
				current = s.top();
				s.pop();

				inord.push_back(current);
				if(v[current][1] != -1) L[v[current][1]] = L[current]+1;
				current = v[current][1];
			}
			else{
				done = true;
			}
		}
	}

	return inord;
}

int main(){

	int N;
	scanf("%d",&N);

	//input
	int p,l,r;
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d %d",&p,&l,&r);

		v[p].push_back(l);
		v[p].push_back(r);

		if(l > 0) Parent[l] = p;
		if(r > 0) Parent[r] = p;
	}

	//root찾기
	int root;
	for(int i = 1 ; i<= N ; i++){
		if(Parent[i] == 0) root = i;
	}
	//inorder
	vector<int> inord = inorder(root);


	//level별 최대최소
	int levelLimit = 0;
	for(int i = 0 ; i < N ; i++){
		int x = inord[i];
		int l = L[x];
		int idx = i+1;

		if(S[l] == 0) S[l] = idx;
		if(B[l] < idx) B[l] = idx;
		if(levelLimit < l) levelLimit = l;
	}

	int maxWidth = 0, maxWidthLev = 0;
	for(int i = 1 ; i <= levelLimit ; i++){
		if(maxWidth < B[i]-S[i]){
			maxWidth = B[i]-S[i];
			maxWidthLev = i;
		}
	}

	printf("%d %d",maxWidthLev,maxWidth+1);

	return 0;
}*/

/*
#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

typedef struct tree{
	int lChild,rChild;
	int level;
	tree(){lChild = -1; rChild = -1; level = -1;}
	tree(int l,int r,int v){ lChild = l; rChild = r; level = v;}
} Tree;

Tree t[10001];
int ans[10001][2];
int parent[10001];

vector<int> v;

void inorder(int s){

	if(t[s].lChild > 0) inorder(t[s].lChild);
	v.push_back(s);
	if(t[s].rChild > 0) inorder(t[s].rChild);

}

void inorder(int start){
	int current = start;
	stack<int> s;
	bool done = false;

	while(!done){

		if(current != -1){
			s.push(current);
			current = t[current].lChild;
		}
		else{
			if(!s.empty()){
				current = s.top();
				s.pop();
				v.push_back(current);
				current = t[current].rChild;
			}
			else{
				done = true;
			}
		}
	}
}

int main(){

	int N;
	scanf("%d",&N);

	int level = 1, num = 1;
	int p,l,r;
	for(int i = 0 ; i < N ; i++){
		int cnt = 0;
		for(int j = 1 ; j <= num ; j++){
			scanf("%d %d %d",&p,&l,&r);
			t[p] = Tree(l,r,level);
			if(l>0){
				cnt++; parent[l] = p;
			}
			if(r>0){
				cnt++; parent[r] = p;
			}
		}
		i += num-1;
		num = cnt;
		level++;
	}

	int root;
	for(int i = 1 ; i<= N ; i++){
		if(parent[i] == 0) root = i;
	}
	inorder(root);

	for(int i = 0 ; i < N ; i++){
		int min = ans[t[v[i]].level][0];
		int max = ans[t[v[i]].level][1];

		if(min == 0) ans[t[v[i]].level][0] = i+1;
		else ans[t[v[i]].level][0] = min<i+1?min:i+1;

		if(max == 0) ans[t[v[i]].level][1] = i+1;
		else ans[t[v[i]].level][1] = max>i+1?max:i+1;

	}

	int ll,aa;
	for(int i = 1 ; i < level ; i++){
		if(aa < ans[i][1]-ans[i][0]){
			ll = i;
			aa = ans[i][1]-ans[i][0];
		}
	}

	printf("%d %d",ll,aa+1);

	return 0;
}
*/

