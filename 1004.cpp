/*
#include <cstdio>

bool isIn(int x,int y, int cx, int cy, int r){
	return (cx-x)*(cx-x)+(cy-y)*(cy-y) < r*r;
}

int main(){
	int T;
	scanf("%d",&T);

	int n;
	int x1,y1,x2,y2;
	for(int test_case = 1 ; test_case <= T ; test_case++){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		scanf("%d",&n);

		int count = 0;
		int cx,cy,r;
		for(int i = 0 ; i < n ; i++){
			scanf("%d %d %d",&cx,&cy,&r);

			bool s = isIn(x1,y1,cx,cy,r);
			bool d = isIn(x2,y2,cx,cy,r);

			if(s && !d) count++;
			else if(!s && d) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
*/
