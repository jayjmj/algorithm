// 솔루션 보고 짬.. 다시 계속 봐야한다.
/*

#include <cstdio>
#include <vector>

using namespace std;

int Num[300000];
int A[300000],B[300000];
const int mod = 1000000007;
long long fac[300000];
int ans[300000];

struct Info{
	int querySeq, num;
	Info(int querySeq,int num):querySeq(querySeq),num(num){}
};

vector<int> leave[300000];
vector<Info> come[300000];

struct FenwickTree{

	vector<int> itree;

	FenwickTree(int n){
		itree.resize(n+1,0);
	}

	void add(int pos, int val){
		pos++;
		int size = itree.size();
		while(pos < size){
			itree[pos] = (itree[pos] + val)%mod;
			pos += pos&(-pos);
		}
	}

	int query(int pos){
		pos++;
		int ret = 0;
		while(pos > 0){
			ret = (ret + itree[pos])%mod;
			pos &= (pos-1);
		}
		return ret;
	}
};

int main(){
	int K,N;
	scanf("%d %d",&K,&N);
	for(int i = 0 ; i < K ; i++) scanf("%d",&Num[i]);

	for(int i = 0 ; i < N ; i++){
		scanf("%d %d",&A[i],&B[i]);
		A[i]--,B[i]--;
		leave[A[i]].push_back(i), leave[B[i]].push_back(i);
		come[A[i]].push_back(Info(i,Num[B[i]])),come[B[i]].push_back(Info(i,Num[A[i]]));
	}

	// factorial
	for(int i = 0 ; i < K ; i++){
		if(i == 0 || i == 1) fac[i] = 1;
		else fac[i] = ((long long)fac[i-1]*i)%mod;
	}

	int rank = 1;
	FenwickTree t(K);
	FenwickTree t2(K);
	for(int i = 0 ; i < K ; i++){
		int weight = Num[i]-1;
		int agg = 0;
		weight -= t.query(Num[i]-1);
		agg = (agg + t2.query(K-Num[i]))%mod;
		rank = (rank + (long long)weight*fac[K-i-1])%mod;

		for(vector<int>::iterator it = leave[i].begin(); it != leave[i].end(); it++){
			int querySeq = *it;
			ans[querySeq] = (ans[querySeq]-(long long)weight*fac[K-i-1])%mod;
			ans[querySeq] = (ans[querySeq]-agg)%mod;
		}
		for(vector<Info>::iterator it = come[i].begin(); it != come[i].end(); it++){
			Info info = *it;
			weight = info.num - 1;
			weight -= t.query(info.num-1);
			agg = 0;
			agg = (agg + t2.query(K-info.num))%mod;
			ans[info.querySeq] = (ans[info.querySeq]+(long long)weight*fac[K-i-1])%mod;
			ans[info.querySeq] = (ans[info.querySeq]+agg)%mod;
		}

		t.add(Num[i]-1,1);
		t2.add(K-Num[i],fac[K-i-1]);
	}

	for(int i = 0 ; i < N ; i++){
		ans[i] = (ans[i] + rank)%mod;
		if(Num[A[i]] < Num[B[i]]){
			ans[i] = (ans[i] - fac[K-A[i]-1])%mod;
			ans[i] = (ans[i] + fac[K-B[i]-1])%mod;
		}
		if(ans[i] < 0) ans[i] += mod;
		printf("%d\n", ans[i]);
	}

	return 0;
}
*/
