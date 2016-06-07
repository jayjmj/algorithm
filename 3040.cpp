/*
#include <cstdio>

int main(){
	int sum = 0;
	int sm[9];
	for(int i = 0 ; i < 9 ; i++){
		scanf("%d",&sm[i]);
		sum += sm[i];
	}

	int t1,t2;
	for(int i = 0 ; i < 9 ; i++){
		for(int j = 0 ; j < 9 ; j++){
			if(i!=j){
				if(sm[i]+sm[j] == sum-100){
					t1 = i;
					t2 = j;
				}
			}
		}
	}

	for(int i = 0 ; i < 9 ; i++){
		if(i != t1 && i != t2) printf("%d\n",sm[i]);
	}

	return 0;
}
*/
