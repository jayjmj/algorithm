/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

bool bSearch(int x, int a,int b){

	if(a>b) return false;
	if(a == b && v[a] == x) return true;

	int mid = (b+a)/2;

	if(v[mid] > x){
		return bSearch(x,a,mid-1);
	}
	else if(v[mid] < x){
		return bSearch(x,mid+1,b);
	}
	else{
		return true;
	}
}

int main(){
	int T;
	scanf("%d",&T);


	for(int t = 1 ; t <= T ; t++){
		int N;
		scanf("%d",&N);
		for(int i = 0 ; i < N ; i++){
			int n;
			scanf("%d",&n);
			v.push_back(n);
		}
		sort(v.begin(),v.end());
		int size = v.size();
		int M;
		scanf("%d",&M);
		for(int i = 0 ; i < M ; i++){
			int m;
			scanf("%d",&m);
			if(v[size-1] >= m && v[0] <= m && bSearch(m,0,size-1)) printf("1\n");
			else printf("0\n");
		}
		v.clear();
	}

	return 0;
}
*/
