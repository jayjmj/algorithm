// 시작과 목표값이 같을 때 0이 나올까봐 굳이 D,S,L,R을 1,2,3,4로 했는데, 이렇게 안하고 0,1,2,3으로 두는 4진수 방법도 잘 구현하면 될듯.
/*
#include <cstdio>
#include <queue>
#include <cstring>
#include <string>

using namespace std;

bool chk[10000];
enum method{d = 1, s, l, r};

void print(long long n){
	if(n == 0) return;
	print(n/5);
	if(n%5 == 1) printf("D");
	else if(n%5 == 2) printf("S");
	else if(n%5 == 3) printf("L");
	else if(n%5 == 4) printf("R");
}

int main(){
	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		memset(chk,0,sizeof(chk));

		int src, dst;
		scanf("%d %d",&src,&dst);

		queue<pair<int,long long> > q;
		q.push({src,0});
		chk[src] = true;

		long long ans = 0;
		bool succ = false;
		while(!q.empty()){
			int qSize = q.size();

			for(int i = 0 ; i <= qSize ; i++){
				pair<int,long long> a = q.front();
				q.pop();

				//case D
				int D = (2*a.first)%10000;
				if(!chk[D]){
					if(D == dst){
						ans = a.second*5+d;
						succ = true;
						break;
					}
					q.push({D,a.second*5+d});
					chk[D] = true;
				}
				//case S
				int S = a.first-1 >= 0 ? a.first-1 : a.first-1+10000;
				if(!chk[S]){
					if(S == dst){
						ans = a.second*5+s;
						succ = true;
						break;
					}
					q.push({S,a.second*5+s});
					chk[S] = true;
				}
				//case L
				int L = (a.first%1000)*10+a.first/1000;
				if(!chk[L]){
					if(L == dst){
						ans = a.second*5+l;
						succ = true;
						break;
					}
					q.push({L,a.second*5+l});
					chk[L] = true;
				}
				//case R
				int R = (a.first%10)*1000+a.first/10;
				if(!chk[R]){
					if(R == dst){
						ans = a.second*5+r;
						succ = true;
						break;
					}
					q.push({R,a.second*5+r});
					chk[R] = true;
				}
			}
			if(succ){
				print(ans);
				printf("\n");
				q = queue<pair<int,long long> >();
				break;
			}
		}
	}


	return 0;
}*/
