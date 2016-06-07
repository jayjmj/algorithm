// min max를 중간 과정에서 구할 수 있는데, 그 방법을 몰라서
// 세그먼트트리까지 구현해보았던 문제...ㅠ

/*#include <cstdio>
#include <cstring>
#include <algorithm>

const int inf = 1000000001;
long long D[20001];
int A[20001];

int main(){
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	for(int i = 1 ; i <= N ; i++) scanf("%d",&A[i]);

	memset(D,0x3f,sizeof(D));
	D[0] = 0;
	for(int i = 1 ; i <= N ; i++){
		int minOrg = inf,maxOrg = 0;
		for(int j = 1; j <= M ; j++){
			if(i-j < 0) break;
			if(minOrg > A[i-j+1]) minOrg = A[i-j+1];
			if(maxOrg < A[i-j+1]) maxOrg = A[i-j+1];
			D[i] = std::min(D[i],D[i-j]+K+(long long)j*(maxOrg-minOrg));
		}
	}
	printf("%lld",D[N]);

	return 0;
}*/

/* 세그먼트 트리 구현한거
#include <cstdio>
#include <cstring>

long long D[20001];
int A[20001];
long long se[80001][2];

long long min(long long a,long long b){return a<b?a:b;}
long long max(long long a,long long b){return a>b?a:b;}

void init(int node,int start,int end){
	if(start == end){
		se[node][0] = A[start];
		se[node][1] = A[start];
	}
	else{
		init(node*2,start,(start+end)/2);
		init(node*2+1,(start+end)/2+1,end);
		se[node][0] = max(se[node*2][0],se[node*2+1][0]);
		se[node][1] = min(se[node*2][1],se[node*2+1][1]);
	}
}

long long query(int node,int start,int end, int i, int j,int minmax){
	if(i > end || j < start) return -1;
	if(i <= start && end <= j) return se[node][minmax];

	long long m1 = query(2*node,start,(start+end)/2,i,j,minmax);
	long long m2 = query(2*node+1,(start+end)/2+1,end,i,j,minmax);

	if(m1 == -1) return m2;
	else if(m2 == -1) return m1;
	else if(minmax == 0) return max(m1,m2);
	else return min(m1,m2);
}


int main(){

	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);

	for(int i = 1 ; i <= N ; i++) scanf("%d",&A[i]);
	init(1,1,N);

	memset(D,0x3f,sizeof(D));
	D[0] = 0;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1; j <= M ; j++){
			if(i-j < 0) break;
			D[i] = min(D[i],D[i-j]+K+(long long)j*(query(1,1,N,i-j+1,i,0)-query(1,1,N,i-j+1,i,1)));
		}
	}

	printf("%lld",D[N]);

	return 0;
}*/
