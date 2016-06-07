/*
// 한쪽으로만 뻗은 트리일때, 루트노드가 있는 level 1이 답이 되는데, 가장 처음 비교하는 min값의 초기값이 0 이라서
// 최대 width가 0 이기 때문에 비교에 성공 불가..

#include <cstdio>
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

	int maxWidth = -1, maxWidthLev = 0;
	for(int i = 1 ; i <= levelLimit ; i++){
		if(maxWidth < B[i]-S[i]){
			maxWidth = B[i]-S[i];
			maxWidthLev = i;
		}
	}

	printf("%d %d",maxWidthLev,maxWidth+1);

	return 0;
}*/
