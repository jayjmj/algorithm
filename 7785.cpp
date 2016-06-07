/*
#include <cstdio>
#include <map>
#include <string>
#include <cstring>

using namespace std;

map<string,int> enter;

int m7785(){

	int n;
	scanf("%d",&n);

	string name;
	char tmp[50];
	while(n--){
		scanf("%s",tmp);
		name = tmp;

		scanf("%s",tmp);

		if(strcmp(tmp,"enter")==0){
			enter[name] = 1;
		}
		else{
			enter[name] = 0;
		}
	}

	map<string,int>::reverse_iterator it;
	for(it = enter.rbegin() ; it != enter.rend() ; it++){
		if(it->second == 1){
			printf("%s\n",it->first.c_str());
		}
	}

	return 0;
}
*/
