/*#include <cstdio>
#include <map>
#include <string>

using namespace std;

map<string,int> name2Num;
map<int,string> num2Name;

int string2Num(string s, int len){
	if(len == 0) return 0;
	else return string2Num(s,len-1)*10+(int)(s[len-1]-'0');
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	char tmp[21];
	string name;
	for(int no = 1; no <= N ; no++){
		scanf("%s",tmp);
		name = tmp;
		name2Num[name] = no;
		num2Name[no] = name;
	}

	string q;
	for(int i = 0 ; i < M ; i++){
		scanf("%s",tmp);
		q = tmp;
		if(q[0] >= '1' && q[0] <= '9'){
			int len = q.length();
			printf("%s\n",num2Name[string2Num(q,len)].c_str());
		}
		else{
			printf("%d\n",name2Num[q]);
		}
	}

	return 0;
}*/
