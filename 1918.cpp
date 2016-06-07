/*#include <cstdio>
#include <stack>

using namespace std;

int main(){

	char c;
	stack<char> s;
	while(scanf("%c",&c) == 1 && c != '\n'){
		if(c == '('){
			s.push(c);
		}
		else if(c == ')'){
			char tmp;
			while(!s.empty() && (tmp = s.top()) != '('){
				printf("%c",tmp);
				s.pop();
			}
			s.pop();
		}
		else if(c == '+' || c == '-'){
			char tmp;
			while(!s.empty() && (tmp = s.top()) != '('){
				printf("%c",tmp);
				s.pop();
			}
			s.push(c);
		}
		else if(c == '*' || c == '/'){
			if(!s.empty()){
				char tmp = s.top();
				if(tmp == '*' || tmp == '/'){
					s.pop();
					printf("%c",tmp);
				}
			}
			s.push(c);
		}
		else{
			printf("%c",c);
		}
	}

	while(!s.empty()){
		printf("%c",s.top());
		s.pop();
	}

	return 0;
}*/
