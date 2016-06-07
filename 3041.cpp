/*
#include <cstdio>
#include <cmath>

using namespace std;

int x[] = {0,0,0,0,1,1,1,1,2,2,2,2,3,3,3};
int y[] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2};

char alpha[16];

int main(){
	int c;
	int dist = 0;
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			scanf("%c",&c);
			if(c != '.') dist += abs(x[c-'A']-i)+abs(y[c-'A']-j);
		}
		getchar();
	}

	printf("%d",dist);

	return 0;
}
*/
