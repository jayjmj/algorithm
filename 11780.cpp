/*#include <cstdio>
#include <cstring>

int d[101][101];
int p[101][101];
const int inf = 1000000000;
int path[101];
int nth;

void getPath(int from, int to){
	int mid = p[from][to];

	if(mid != 0){
		getPath(from,mid);
		getPath(mid,to);
		return;
	}
	path[nth] = from;
	nth++;
}

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			d[i][j] = inf;
		}
	}

	for(int i = 0 ; i < m ; i++){
		int u,v,c;
		scanf("%d %d %d",&u,&v,&c);
		if(d[u][v] > c) d[u][v] = c;
	}

	for(int k = 1; k <= n ; k++){
		for(int i = 1; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i != j && d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k]+d[k][j];
					p[i][j] = k;
				}
			}
		}
	}

	for(int i = 1 ;i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			printf("%d ",d[i][j] == inf ? 0 : d[i][j]);
		}
		printf("\n");
	}
	for(int i = 1; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(i == j) printf("0");
			else{
				nth = 0;
				getPath(i,j);
				printf("%d ",nth+1);
				for(int i = 0 ; i < nth ; i++) printf("%d ",path[i]);
				printf("%d",j);
			}
			printf("\n");
		}
	}

	return 0;
}*/

/*#include <cstdio>
#include <cstring>

int d[101][101];
int p[101][101];
const int inf = 1000000000;
int path[101];

void getPath(int from, int to,int &nth){
	int mid = p[from][to];

	if(mid != 0){
		getPath(from,mid,nth);
		getPath(mid,to,nth);
		return;
	}
	path[nth] = from;
	nth++;
}

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			d[i][j] = inf;
		}
	}

	for(int i = 0 ; i < m ; i++){
		int u,v,c;
		scanf("%d %d %d",&u,&v,&c);
		if(d[u][v] > c) d[u][v] = c;
	}

	for(int k = 1; k <= n ; k++){
		for(int i = 1; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i != j && d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k]+d[k][j];
					p[i][j] = k;
				}
			}
		}
	}

	for(int i = 1 ;i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			printf("%d ",d[i][j] == inf ? 0 : d[i][j]);
		}
		printf("\n");
	}
	for(int i = 1; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(i == j) printf("0");
			else{
				int nth = 0;
				getPath(i,j,nth);
				printf("%d ",nth+1);
				for(int i = 0 ; i < nth ; i++) printf("%d ",path[i]);
				printf("%d",j);
			}
			printf("\n");
		}
	}

	return 0;
}*/

/*#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int d[101][101];
int p[101][101];
const int inf = 1000000000;

vector<int> print(int from, int to){
	int mid = p[from][to];
	vector<int> ans;
	if(mid != 0){
		vector<int> front = print(from,mid);
		vector<int> back = print(mid,to);

		ans.insert(ans.end(),front.begin(),front.end());
		ans.push_back(mid);
		ans.insert(ans.end(),back.begin(),back.end());
	}
	return ans;
}

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			d[i][j] = inf;
		}
	}

	for(int i = 0 ; i < m ; i++){
		int u,v,c;
		scanf("%d %d %d",&u,&v,&c);
		if(d[u][v] > c) d[u][v] = c;
	}

	for(int k = 1; k <= n ; k++){
		for(int i = 1; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i != j && d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k]+d[k][j];
					p[i][j] = k;
				}
			}
		}
	}

	for(int i = 1 ;i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			printf("%d ",d[i][j] == inf ? 0 : d[i][j]);
		}
		printf("\n");
	}
	for(int i = 1; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(i == j) printf("0");
			else{
				vector<int> ans = print(i,j);
				int size = ans.size();
				printf("%d ",size+2);
				printf("%d ",i);
				for(int k = 0 ; k < size ; k++) printf("%d ",ans[k]);
				printf("%d ",j);
			}
			printf("\n");
		}
	}


	return 0;
}*/



/*
#include <cstdio>

int p[101][101];
int d[101][101];
const int inf = 100000000;

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			d[i][j] = inf;
			if(i == j) d[i][j] = 0;
			p[i][j] = j;
		}
	}

	int from,to,cost;
	for(int i = 0 ; i < m ; i++){
		scanf("%d %d %d",&from,&to,&cost);
		if(d[from][to] > cost) d[from][to] = cost;
	}

	for(int k = 1; k <= n ; k++){
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i != j && d[i][k] != inf && d[k][j] != inf && d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k] + d[k][j];
					p[i][j] = k;
				}
			}
		}
	}

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(d[i][j] == inf) printf("0 ");
			else printf("%d ",d[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/
