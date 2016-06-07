/*
#include <cstdio>
#include <cstring>

using namespace std;

const int cost[10] = {6,2,5,5,4,5,6,3,7,5};
int costSum[15];
int num[15];

int main(){
	char cNum[16];
	scanf("%s",cNum);

	int len = strlen(cNum);
	for(int i = 0 ; i < len ; i++) num[len-1-i] = cNum[i] - '0';

	//	int score = 0;
	//	for(int i = 0 ; i < len ; i++) score += cost[num[i]];
	//	printf("%d",score);

	int sum = 0;
	for(int i = 0 ; i < len ; i++){
		sum += cost[num[i]];
		costSum[i] = sum;
	}


	for(int i = 0 ; i < len ; i++){
		if(costSum[i] )
	}


	return 0;
}
*/
