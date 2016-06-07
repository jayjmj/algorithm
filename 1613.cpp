/* 플로이드 와샬에서 k,i,j순서의 for문이 아닌 i,j,k순서의 for문을 돌려서 틀림
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int inf = 1000000000;
int d[401][401];


int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	for(int i = 1; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			d[i][j] = inf;
		}
	}

	int a,b;
	for(int i = 0 ; i < k ; i++){
		scanf("%d %d",&a,&b);
		d[b][a] = 1;
	}

	for(int k = 1 ; k <= n ; k++){
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i!=j && d[i][j] > d[i][k]+d[k][j]) d[i][j] = d[i][k]+d[k][j];
			}
		}
	}

	int s;
	scanf("%d",&s);
	for(int i = 0 ; i < s ; i++){
		scanf("%d %d",&a,&b);

		if(d[b][a] == inf){
			if(d[a][b] == inf) printf("0\n");
			else printf("1\n");
		}
		else printf("-1\n");
	}

	return 0;
}
*/
