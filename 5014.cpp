/*#include <cstdio>
#include <queue>

using namespace std;

bool chk[1000001];

int main(){

	int f,s,g,u,d;
	scanf("%d %d %d %d %d",&f,&s,&g,&u,&d);

	queue<int> q;
	q.push(s);
	chk[s] = true;

	int cnt = 0;
	bool success = false;
	if(s == g){
		q.pop();
		success = true;
	}
	while(!q.empty()){
		cnt++;
		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			int x = q.front();
			q.pop();

			int nd = x - d;
			int nu = x + u;

			if(nd == g || nu == g){
				success = true;
				break;
			}

			if(nd >= 1 && !chk[nd]){
				q.push(nd);
				chk[nd] = true;
			}
			if(nu <= f && !chk[nu]){
				q.push(nu);
				chk[nu] = true;
			}
		}

		if(success) break;
	}

	if(success) printf("%d\n",cnt);
	else printf("use the stairs\n");

	return 0;
}*/
