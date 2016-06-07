/*
#include <cstdio>
#include <map>

using namespace std;

map<string,int> m;

int main(){
	int N;
	scanf("%d",&N);

	string s;
	int max = 0;
	char str[51];
	for(int i = 0 ; i < N ; i++){
		scanf("%s",str);
		s = str;
		m[s]++;
		if(m[s] > max) max = m[s];
	}

	map<string,int>::iterator it;
	for(it = m.begin() ; it != m.end() ; ++it){
		if(it->second == max){
			printf("%s\n",it->first.c_str());
			break;
		}
	}

	return 0;
}
*/
