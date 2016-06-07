/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int area[26][26];
bool chk[26][26];

int xMove[] = {0,0,1,-1};
int yMove[] = {1,-1,0,0};

int dfs(int i,int j){
	chk[i][j] = true;

	int count = 1;
	for(int k = 0 ; k < 4 ; k++){
		int nx = i + xMove[k];
		int ny = j + yMove[k];

		if(nx >= 0 && ny >= 0 && nx <= N && ny <= N && area[nx][ny] > 0 && !chk[nx][ny]){
			count += dfs(nx,ny);
		}
	}

	return count;
}

int main(){
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++) scanf("%1d",&area[i][j]);
	}

	int count = 0;
	vector<int> ans;
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1 ; j <= N ; j++){
			if(area[i][j] >0 && !chk[i][j]){
				count++;
				ans.push_back(dfs(i,j));
			}
		}
	}

	sort(ans.begin(),ans.end());
	printf("%d\n",count);
	for(int i = 0 ; i < count; i++){
		printf("%d\n",ans[i]);
	}

	return 0;
}
*/
