/*#include <cstdio>
#include <queue>
#include <functional>

using namespace std;

const int minY = -100000;
const int maxY = 100000;

int axisInfo[100001][3]; // 0 : cnt, 1: min, 2: max

typedef struct axis{
	int x,y;
	axis(){
		x = 0; y = 0;
	}
	axis(int _x, int _y){
		x = _x; y = _y;
	}

	bool operator > (const struct axis &a) const{
		if(x == a.x) return y > a.y;
		return x > a.x;
	}
} Axis;

Axis order[100001];

int main(){

	//freopen("input.txt","r",stdin);

	int T;
	scanf("%d",&T);

	for(int test_case = 1 ; test_case <= T ; test_case++){
		int n;
		scanf("%d",&n);

		for(int i = 0 ; i <= 100000 ; i++){
			axisInfo[i][0] = 0;
			axisInfo[i][1] = maxY;
			axisInfo[i][2] = minY;
			order[i] = Axis(0,0);
		}

		priority_queue<Axis,vector<Axis>,greater<Axis> > q;
		int x,y;
		for(int i = 0 ; i < n ; i++){
			scanf("%d %d",&x,&y);

			axisInfo[x][0]++;
			q.push(Axis(x,y));

			if(axisInfo[x][1] > y) axisInfo[x][1] = y;
			if(axisInfo[x][2] < y) axisInfo[x][2] = y;

		}

		//Algorithm
		int direction = 0;
		int idx = 0;
		int ordNum = 1;
		Axis current(0,0);
		while(!q.empty()){

			int qSize = axisInfo[idx][0];
			while(qSize == 0){
				idx++;
				qSize = axisInfo[idx][0];
			}

			Axis a = q.top();
			if(qSize == 1){
				direction = 0;
			}
			else if(current.y <= axisInfo[idx][1]){ // 이전 좌표가 min보다 적을 때
				direction = 1;
			}
			else if((current.y > axisInfo[idx][1]) && (current.y < axisInfo[idx][2])){ // 이전 좌표가 min과 max 사이일 때
				direction *= (-1);
				if(direction == 0){
					if(current.y - axisInfo[idx][1] > axisInfo[idx][1] - current.y){
						direction = -1;
					}
					else{
						direction = 1;
					}
				}
			}
			else if(current.y >= axisInfo[idx][2]){ // 이전 좌표가 max보다 클 때
				direction = -1;
			}

			current = a;
			for(int i = 0 ; i < qSize ; i++){
				a = q.top();
				q.pop();

				if(direction == 0){
					order[ordNum+i] = a;
				}
				else if(direction == 1){
					order[ordNum+i] = a;
					current = a;
				}
				else if(direction == -1){
					order[ordNum+qSize-i-1] = a;
				}
			}

			idx++;
			ordNum += qSize;
		}


		int m;
		scanf("%d",&m);
		for(int i = 0 ; i < m ; i++){
			int cafe;
			scanf("%d",&cafe);
			printf("%d %d\n",order[cafe].x,order[cafe].y);
		}
	}

	return 0;

}*/
