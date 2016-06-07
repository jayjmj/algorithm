/*#include <cstdio>

int D[31];

int main(){

	int N;
	scanf("%d",&N);

	D[0] = 1;
	for(int i = 1 ; i <= N ; i++){
		if(i == 1) D[i] = 1;
		else D[i] = D[i-1] + 2*D[i-2];
	}

	if(N%2 == 0) printf("%d\n",(D[N]+D[N/2]+2*D[N/2-1])/2);
	else printf("%d\n",(D[N]+D[N/2])/2);

	return 0;
}*/

/* 잘못 짠 코드
#include <cstdio>

int D[31][4];

int main(){

	int N;
	scanf("%d",&N);

	for(int i = 1 ; i <= N ; i++){
		if(i == 1){
			D[i][0] = 1;
			D[i][1] = 0;
			D[i][2] = 0;
			D[i][3] = 0;
		}
		else if(i == 2){
			D[i][0] = 1;
			D[i][1] = 1;
			D[i][2] = 1;
			D[i][3] = 0;
		}
		else{
			D[i][0] = D[i-1][0]; // 2*1
			D[i][1] = D[i-2][1]; // 1*2
			D[i][2] = D[i-2][2]; // 2*2
			D[i][3] = D[i-1][1] + D[i-1][2] + 2*D[i-2][0] + D[i-2][1] + D[i-2][2] + D[i-1][3] + 2* D[i-2][3]; // 2*2
		}
	}

	int count = 0;
	for(int i = 0 ; i < 4 ; i++){
		printf("%d\n",D[N][i]);

		//if(i != 3) count += D[N][i];
		//else count += D[N][i]/2;
	}
	//printf("%d\n", count);

	return 0;
}
*/
