/*
#include <cstdio>
#include <queue>

using namespace std;

typedef struct point{
	int x,y;
	point(int _x,int _y){x=_x;y=_y;}
	bool operator<(const point &a) const{
		if(y == a.y) return x > a.x;
		return y > a.y;
	}
} Point;


int main(){
	int N;
	scanf("%d",&N);

	int E;
	priority_queue<Point> pq;
	for(int i = 0 ; i < N ; i++){
		int x,y;
		scanf("%d %d",&x,&y);
		pq.push(Point(x,y));
		if(i == N-1) E = x;
	}

	int height = 0;

	while(!pq.empty()){
		while(height == pq.top().y){

		}
	}



	return 0;
}
*/
