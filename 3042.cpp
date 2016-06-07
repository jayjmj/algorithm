/*
#include <cstdio>

int main(){
	int N;
	scanf("%d",&N);
	getchar();

	char c;
	int idx = 0;
	int x[26],y[26];
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			scanf("%c",&c);
			if(c != '.'){
				x[idx] = i;
				y[idx] = j;
				idx++;
			}
		}
		getchar();
	}

	int count = 0;
	for(int i = 0 ; i < idx ; i++){
		for(int j = 0; j < i ; j++){
			for(int k = 0 ; k < j ; k++){
				int x1 = x[i]-x[j];
				int y1 = y[i]-y[j];
				int x2 = x[i]-x[k];
				int y2 = y[i]-y[k];
				if(x1*y2 == x2*y1) count++;
			}
		}
	}

	printf("%d",count);

	return 0;
}
*/
