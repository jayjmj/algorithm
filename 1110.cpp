/*
#include <cstdio>

int m1110(){

	int N;
	scanf("%d",&N);

	int count = 0;
	int num = N;
	int first,second;
	do{
		first = num/10;
		second = num%10;

		num = second*10+(first+second)%10;
		count++;
	}while(N != num);

	printf("%d\n",count);

	return 0;
}
*/
