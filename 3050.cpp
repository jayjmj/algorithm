/*

#include <cstdio>
#include <stack>

using namespace std;

char room[401][401];
int chk[401][401];

int main(){

	int R,C;
	scanf("%d %d",&R,&C);
	getchar();

	char c;
	for(int i = 1 ; i <= R ; i++){
		for(int j = 1 ; j <= C ; j++){
			scanf("%c",&room[i][j]);
		}
		getchar();
	}

	for(int i = 1 ; i <= R ; i++){
		for(int j = 1 ; j <= C ; j++){
			if(room[i][j] == '.'){
				chk[i][j] = chk[i][j-1]+1;
			}
		}
	}

	int max = 0;
	for(int j = 1 ; j <= C ; j++){
		stack<int> s;
		int ans = 0;
		for(int i = 1 ; i <= R ; i++){
			while(!s.empty() && chk[s.top()][j] > chk[i][j]){
				int height = chk[s.top()][j];
				s.pop();
				int width = i;
				if(!s.empty()) width = (i-s.top()-1);
				if(ans < width+height && height != 0) ans = width+height;
			}
			s.push(i);
		}

		while(!s.empty()){
			int height = chk[s.top()][j];
			s.pop();
			int width = R;
			if(!s.empty()){
				width = R-s.top()-1;
			}
			if(ans < width+height && height != 0) ans = width+height;
		}
		if(max < ans) max = ans;
	}

	printf("%d\n",2*max-1);


	return 0;
}
*/
