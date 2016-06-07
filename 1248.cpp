/*
#include <cstdio>

char S[11][11];
int A[11];
char sign[11];

int main(){

	int N;
	scanf("%d",&N);
	getchar();

	for(int i = 1 ; i <= N; i++){
		for(int j = i ; j <= N ; j++){
			scanf("%c",&S[i][j]);
		}
	}

	for(int i = 1 ; i <= N ; i++){
		for(int j = i ; j <= N ; j++){

		}
	}

	for(int i = 1; i <= N ; i++) printf("%d ",A[i]);

	return 0;
}
*/


/*
#include <cstdio>

char sign[11][11];
int A[11];

int main(){

	int N;
	scanf("%d",&N);
	getchar();

	for(int i = 1 ; i <= N; i++){
		for(int j = i ; j <= N ; j++){
			scanf("%c",&sign[i][j]);
		}
	}

	for(int i = 1 ; i <= N ; i++){
		int sum = 0;
		for(int j = i ; j <= N ; j++){
			if(sign[i][j] == '-'){
				while(sum+A[j] >= 0) A[j]--;
				sum += A[j];
			}
			else if(sign[i][j] == '+'){
				while(sum+A[j] <= 0) A[j]++;
				sum += A[j];
			}
			else{
				while(sum+A[j] != 0){
					if(sum+A[j] > 0) A[j]--;
					else A[j]++;
				}
				sum += A[j];
			}
		}
	}

	for(int i = 1; i <= N ; i++) printf("%d ",A[i]);

	return 0;
}
*/


/*
#include <cstdio>

char sign[11][11];
int A[11];

int main(){

	int N;
	scanf("%d",&N);
	getchar();

	for(int i = 1 ; i <= N; i++){
		for(int j = i ; j <= N ; j++){
			scanf("%c",&sign[i][j]);
		}
	}

	for(int i = N ; i >0 ; i--){
		for(int j = 0 ; i+j <= N ; j++){
			int sum = 0;
			if(j == 0){
				if(sign[i][i+j] == '-') A[i] = -1;
				else if(sign[i][i+j] == '+') A[i] = 1;
				else{
					A[i] = 0;
					break;
				}
			}
			else{
				for(int k = i+1 ; k <= i+j ; k++) sum += A[k];
				if(sign[i][i+j] == '-'){
					while(A[i]+sum >= 0){
						if(A[i] > 1) A[i]--;
						else if(A[i] == 1){
							for(int k = i+1 ; k <= N ; k++) A[k] = A[k]*2;
							sum = sum*2;
						}
						else A[i] --;
					}
				}
				else if(sign[i][i+j] == '+'){
					while(A[i]+sum <= 0){
						if(A[i] < -1) A[i]++;
						else if(A[i] == -1){
							for(int k = i+1 ; k <= N ; k++) A[k] = A[k]*2;
							sum = sum*2;
						}
						else A[i]++;
					}
				}
				else{ // 0
					while(A[i]+sum != 0){
						if(A[i]+sum < 0){
							A[i]++;
						}
						else{
							A[i]--;
						}
					}
				}
			}
		}
	}

	for(int i = 1; i <= N ; i++) printf("%d ",A[i]);

	return 0;
}
*/
