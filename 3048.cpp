/*
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

void swap(int &a,int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){
	int N1,N2;
	scanf("%d %d",&N1,&N2);
	getchar();

	char ant[27],ant2[27];
	scanf("%s",ant);
	scanf("%s",ant2);
	int antLen = strlen(ant);
	int ant2Len = strlen(ant2);

	vector<int> v(antLen+ant2Len);
	for(int i = 0 ; i < antLen ; i++) v[i] = 0;
	for(int i = antLen ; i < antLen+ant2Len ; i++) v[i] = 1;

	int T;
	scanf("%d",&T);

	for(int t = 0 ; t < T ; t++){
		int prev;
		for(int i = 0 ; i < antLen+ant2Len ; i++){
			if(i == 0) prev = i;
			else{
				if(v[prev] < v[i]){
					swap(v[prev],v[i]);
					i++;
				}
				prev = i;
			}
		}
	}

	int idx1 = antLen-1,idx2 = 0;
	for(int i = 0 ; i < v.size()  ; i++){
		if(v[i] == 0){
			printf("%c",ant[idx1]);
			idx1--;
		}
		else{
			printf("%c",ant2[idx2]);
			idx2++;
		}
	}

	return 0;
}
*/
