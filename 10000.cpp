/*

#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

typedef struct circle{
	int l,r;
	circle(){l=0;r=0;}
	circle(int _l, int _r){l=_l;r=_r;}
	bool operator<(const struct circle &a) const{
		if(l == a.l) return r < a.r;
		return l > a.l;
	}
} Circle;

int main(){

	int N;
	scanf("%d",&N);

	priority_queue<Circle> q;
	int x,r;
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d",&x,&r);

		q.push(Circle(x-r,x+r));
	}

	int areaCnt = 1;
	stack<int> s;
	int size = 0;
	while(!q.empty()){
		Circle a = q.top();
		q.pop();
		Circle b;
		if(!q.empty()) b = q.top();

		size += a.r - a.l;
		if(a.l <= b.l && a.r >= b.r){
			s.push(size);
			size = 0;
		}
		else{

		}
	}

	printf("%d\n",areaCnt);

	return 0;
}
*/
