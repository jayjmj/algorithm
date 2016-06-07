/*
#include <cstdio>
#include <set>
#include <string>

using namespace std;

int m1764(){

	set<string> s1,s2;

	int N,M;
	scanf("%d %d",&N,&M);

	string name;
	char tmp[30];
	for(int i = 0 ; i < N ; i++){
		scanf("%s",tmp);
		name = tmp;

		s1.insert(name);
	}
	for(int i = 0 ; i < M ; i++){
		scanf("%s",tmp);
		name = tmp;

		if(s1.find(name) != s1.end()){
			s2.insert(name);
		}
	}

	set<string>::iterator it;
	printf("%d\n",s2.size());
	for(it = s2.begin() ; it != s2.end() ; it++){
		printf("%s\n",it->data());
	}

	return 0;
}
*/
