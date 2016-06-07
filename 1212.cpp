/*
#include <cstdio>
#include <cstring>

using namespace std;

void eight2Two(int num,bool first){
	if(num >= 4){
		printf("1"); num -= 4; first = false;
	}
	else if(!first){
		printf("0");
	}

	if(num >= 2){
		printf("1"); num -= 2; first = false;
	}
	else if(!first){
		printf("0");
	}

	if(num >= 1){
		printf("1"); num -= 1;
	}
	else{
		printf("0");
	}

}

int main(){

	char c;
	bool first = true;
	while(scanf("%c",&c) == 1 && c != '\n' && c != EOF){
		int num = c - '0';
		if(first){
			eight2Two(num,first);
			first = false;
		}
		else{
			eight2Two(num,first);
		}
	}


	return 0;
}
*/
