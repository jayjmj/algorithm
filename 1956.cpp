/*#include <cstdio>

int d[401][401];
const int inf = 1000000000;

int main(){
	int V,E;
	scanf("%d %d",&V,&E);

	for(int i = 1 ; i <= V ; i++){
		for(int j = 1 ; j <= V ; j++){
			d[i][j] = inf;
		}
	}

	for(int i = 0 ; i < E ; i++){
		int u,v,c;
		scanf("%d %d %d",&u,&v,&c);
		d[u][v] = c;
	}

	for(int k = 1; k <= V ; k++){
		for(int i = 1 ; i <= V ; i++){
			for(int j = 1 ; j <= V ; j++){
				if(d[i][j] > d[i][k]+d[k][j]){
					d[i][j] = d[i][k]+d[k][j];
				}
			}
		}
	}

	int min = inf;
	for(int i = 1 ; i <= V ; i++){
		if(min > d[i][i]) min = d[i][i];
	}

	printf("%d\n",min == inf ? -1 : min);

	return 0;
}*/
