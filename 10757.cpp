/* 위에 코드는 숫자를 안뒤집고 더하기, 아래는 숫자를 뒤집어서 더하기 인데, 위에껀 답이 틀리다고 나온다.(아래 sum,carry부분은 두 코드 모두 같으므로 위에 메모리 처리에서 문제가 있는듯)

#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	char num1[10002],num2[10002];
	int result[10002];
	scanf("%s %s",num1,num2);

	int length1 = strlen(num1),length2 = strlen(num2);
	int gap,length;
	if(length1 > length2){
		gap = length1 - length2;
		length = length1;
		strncpy(num2+gap,num2,length2);
		for(int i = gap-1 ; i >= 0 ; i--) num2[i] = '0';
	}
	else if(length1 < length2){
		gap = length2 - length1;
		length = length2;
		strncpy(num1+gap,num1,length1);
		for(int i = gap-1 ; i >= 0 ; i--) num1[i] = '0';
	}
	else{
		length = length1;
	}

	int c = 0, s = 0;
	for(int i = length-1 ; i >= 0 ; i--){
		int temp = (int)(num1[i]-'0') + (int)(num2[i]-'0') + c;
		s = temp%10;
		c = temp/10;
		result[i] = s;
	}

	if(c > 0) printf("%d",c);
	for(int i = 0 ; i < length ; i++){
		printf("%d",result[i]);
	}

	return 0;
}*/

/*#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	char buf[10001];
	int num1[10001]={0,},num2[10001]={0,};
	int result[10001];

	scanf("%s",buf);
	int len1 = strlen(buf);
	for(int i = 0 ; i < len1 ; i++) num1[len1-1-i] = buf[i]-'0';

	scanf("%s",buf);
	int len2 = strlen(buf);
	for(int i = 0 ; i < len2 ; i++) num2[len2-1-i] = buf[i]-'0';

	int len = len1;
	if(len < len2) len = len2;

	int c = 0, s = 0;
	for(int i = 0 ; i < len ; i++){
		int temp = num1[i] + num2[i] + c;
		s = temp%10;
		c = temp/10;
		result[i] = s;
	}

	if(c > 0) printf("%d",c);
	for(int i = len-1 ; i >= 0 ; i--){
		printf("%d",result[i]);
	}

	return 0;
}*/
