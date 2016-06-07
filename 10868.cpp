/*
#include <cstdio>

int min(int a,int b){return a<b?a:b;}

int A[100000];
int stree[400001];

void init(int node, int left, int right){
	int mid = (left + right)/2;
	if(left == right) stree[node] = A[left];
	else{
		init(2*node,left,mid);
		init(2*node+1,mid+1,right);
		stree[node] = min(stree[2*node],stree[2*node+1]);
	}
}

int query(int node,int left, int right, int nodeLeft, int nodeRight){
	if(left > nodeRight || right < nodeLeft) return -1;
	if(left<=nodeLeft && right>=nodeRight) return stree[node];

	int mid = (nodeLeft+nodeRight)/2;
	int m1 = query(2*node,left,right,nodeLeft,mid);
	int m2 = query(2*node+1,left,right,mid+1,nodeRight);
	if(m1 == -1) return m2;
	else if(m2 == -1) return m1;
	else{
		return min(m1,m2);
	}
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i = 0 ; i < N ; i++) scanf("%d",&A[i]);
	init(1,0,N-1);
	for(int i = 0 ; i < M ; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",query(1,a-1,b-1,0,N-1));
	}

	return 0;
}
*/


/*
#include <cstdio>
#include <algorithm>

using namespace std;

int A[100000];
int Stree[400001];
const int inf = 2000000001;

int init(int left,int right, int node){
	int mid = (left+right)/2;
	if(left == right) return Stree[node] = A[left];
	else return Stree[node] = min(init(left,mid,2*node),init(mid+1,right,2*node+1));
}

int query(int left,int right, int node, int nodeLeft, int nodeRight){
	if(right < nodeLeft || left > nodeRight) return inf;
	if(left <= nodeLeft && right >= nodeRight) return Stree[node];

	int mid = (nodeLeft+nodeRight)/2;
	return min(query(left,right,2*node,nodeLeft,mid),query(left,right,2*node+1,mid+1,nodeRight));
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	for(int i = 0; i < N ; i++) scanf("%d",&A[i]);
	init(0,N-1,1);
	for(int i = 0; i < M ; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",query(a-1,b-1,1,0,N-1));
	}

	return 0;
}
*/

/*

#include <cstdio>

int D[100001][17];
int A[100001];

int min(int a,int b){
	return a<b?a:b;
}

int getRangeMin(int a,int b){
	int gap = b - a;
	int square;
	for(square = 0 ; (1<<square) <= gap ; square++);
	square--;
	return min(D[a][square],D[b-(1<<square)+1][square]);
}

int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	for(int i = 1 ; i <= N ; i++){
		scanf("%d",&A[i]);
	}

	N = 100000;

	for(int j = 0 ; (1<<j) < N ; j++){
		for(int i = 1 ; i <= N ; i++){
			if(j == 0){
				D[i][j] = A[i];
			}
			else{
				if(i+(1<<(j-1)) <= N) D[i][j] = min(D[i+(1<<(j-1))][j-1],D[i][j-1]);
			}
		}
	}

	for(int i = 0 ; i < M ; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",getRangeMin(a,b));
	}

	return 0;
}
*/
