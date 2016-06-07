/*
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

char area[5][61];

void print(int startPoint,char oneChar,int flag){

	for(int i = 0 ; i < 5 ; i++){
		int a = abs(i-2)+1;
		int b = 6-a;
		for(int j = 0 ; j < 5 ; j++){
			if(j == a-1 || j== b-1){
				if(area[i][j+startPoint] != '*'){
					if(flag == 1) area[i][j+startPoint] = '#';
					else area[i][j+startPoint] = '*';
				}
			}
			else if(i == 2 && j == 2){
				area[i][j+startPoint] = oneChar;
			}
			else{
				area[i][j+startPoint] = '.';
			}
		}
	}

}

int main(){
	char s[16];
	scanf("%s",s);
	int len = strlen(s);

	for(int i = 0 ; i < len ; i++){
		if((i+1)%3 == 0) print(4*i,s[i],0);
		else print(4*i,s[i],1);
	}

	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j <= 4*len ;j++){
			printf("%c",area[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/
