/*
#include <cstdio>

int five2six(int num){
	if(num == 0) return 0;
	else{
		if(num%10 == 5) return five2six(num/10)*10+6;
		else return five2six(num/10)*10+num%10;
	}
}
int six2five(int num){
	if(num == 0) return 0;
	else{
		if(num%10 == 6) return six2five(num/10)*10+5;
		else return six2five(num/10)*10+num%10;
	}
}

int main(){

	int A,B;
	scanf("%d %d",&A,&B);

	printf("%d %d",six2five(A)+six2five(B),five2six(A)+five2six(B));

	return 0;
}
*/
