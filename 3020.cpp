/*#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main(){

	int N,H;
	scanf("%d %d",&N,&H);

	priority_queue<int> qS;
	priority_queue<int> qJ;
	for(int i = 1; i <= N ; i++){
		int size;
		scanf("%d",&size);
		if(i%2 == 1) qS.push(-size);
		else qJ.push(-(H-size));
	}

	int lowLimit = 0, highLimit = 200000;
	int sCnt = N/2 , jCnt = 0;
	int cnt = 0, minCnt = 200001, term = 0;
	while(!qS.empty() || !qJ.empty()){
		int x = -1, y = -1;
		if(!qS.empty()) x = -qS.top();
		if(!qJ.empty()) y = -qJ.top();

		if(x == y){
			while(x == -qS.top()){
				qS.pop();
				sCnt--;
			}
			while(y == -qJ.top()){
				qJ.pop();
				jCnt++;
			}
		}
		else if(y < 0 || x < y){
			cnt = sCnt+jCnt;
			if(minCnt > cnt){
				minCnt = cnt;
				term = x - lowLimit;
			}
			else if(minCnt == cnt){
				term += x - lowLimit;
			}
			lowLimit = x;
			while(x == -qS.top()){
				qS.pop();
				sCnt--;
			}
		}
		else if(x < 0 || y < x){
			cnt = sCnt+jCnt;
			if(minCnt > cnt){
				minCnt = cnt;
				term = y - lowLimit;
			}
			else if(minCnt == cnt){
				term += y - lowLimit;
			}
			lowLimit = y;
			while(y == -qJ.top()){
				qJ.pop();
				jCnt++;
			}
		}
	}

	printf("%d %d\n",minCnt,term);

	return 0;
}*/
