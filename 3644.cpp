/*
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

string fib[10002];

string add(string a,string b){
	int lenA = a.length();
	int lenB = b.length();

	int len = lenA>lenB?lenA:lenB;

	string ans = "";
	int sum = 0, carry = 0;
	for(int i = 0 ; i < len ; i++){
		int numA = lenA-1-i >= 0 ? a[lenA-1-i] - '0' : 0;
		int numB = lenB-1-i >= 0 ? b[lenB-1-i] - '0' : 0;

		sum = numA+numB+carry;
		carry = sum/10;
		ans += (sum%10+'0');
				//std::to_string(sum%10)+ans;
	}
	if(carry != 0) ans += (carry+'0'); //ans = std::to_string(carry)+ans;

	reverse(ans.begin(),ans.end());

	return ans;
}

string sub(string a,string b){
	int lenA = a.length();
	int lenB = b.length();

	int len = lenA>lenB?lenA:lenB;

	string ans = "";
	int sum = 0, carry = 0;
	for(int i = 0 ; i < len ; i++){
		int numA = lenA-1-i >= 0 ? a[lenA-1-i] - '0' : 0;
		int numB = lenB-1-i >= 0 ? b[lenB-1-i] - '0' : 0;

		sum = numA-numB-carry;
		if(sum < 0){
			carry = 1;
			sum += 10;
		}
		else carry = 0;

		ans = std::to_string(sum)+ans;
	}

	return ans;
}

string fibo(int n){
	if(fib[n] != "") return fib[n];
	if(n == 0) return fib[0] = "1";
	else if(n == 1) return fib[1] = "1";
	else return fib[n] = add(fibo(n-1),fibo(n-2));
}

string fibo(int n){
	if(fib[n] != "") return fib[n];
	if(n == 3) return fib[n] = "4";
	else if(n == 4) return fib[n] = "7";
	else return fib[n] = add(fibo(n-1),fibo(n-2));
}

int main(){
	int n;
	while(scanf("%d",&n) == 1){
		printf("%s\n",fibo(n).c_str());
	}
	return 0;
}
*/
