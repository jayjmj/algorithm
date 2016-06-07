/*
#include <cstdio>
#include <cstring>

char eq[51];
int A[20];
int B[20];
int ANS[20];

int main(){
	scanf("%s",eq);

	int inCase = 0;
	int aIdx = 0, bIdx = 0, ansIdx = 0;
	int len = strlen(eq);
	int temp[20];
	for(int i = 0 ; i < len ; i++){
		if(inCase == 0){
			if(eq[i] == '?') temp[aIdx] = -1;
			else if(eq[i] == '+'){
				inCase = 1;
				for(int i = aIdx-1 ; i>= 0 ; i--) A[aIdx-i-1] = temp[i];
				memset(temp,0,sizeof(temp));
			}
			else temp[aIdx] = eq[i]-'0';
			aIdx++;
		}
		else if(inCase == 1){
			if(eq[i] == '?') temp[bIdx] = -1;
			else if(eq[i] == '='){
				inCase = 2;
				for(int i = bIdx-1 ; i>= 0 ; i--) B[bIdx-i-1] = temp[i];
				memset(temp,0,sizeof(temp));
			}
			else temp[bIdx] = eq[i]-'0';
			bIdx++;
		}
		else{
			if(eq[i] == '?') temp[ansIdx] = -1;
			else temp[ansIdx] = eq[i]-'0';
			ansIdx++;
		}
	}
	for(int i = ansIdx-1 ; i>= 0 ; i--) ANS[ansIdx-i-1] = temp[i];

	int sum = 0, carry = 0;
	for(int i = 0 ; i < ansIdx ; i++){
		if(A[i] == -1){

		}
		else if(B[i] == -1){

		}
		else if(ANS[i] == -1){

		}
	}


	return 0;
}
*/
