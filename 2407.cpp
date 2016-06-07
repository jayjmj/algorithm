/*#include <cstdio>
#include <string>

using namespace std;

string addStr(string a,string b){
	int alen = a.length();
	int blen = b.length();
	int len = alen>blen?alen:blen;

	string ans;
	int s = 0, c = 0;
	int aa,bb;
	for(int i = 0 ; i < len ; i++){
		if(i < alen) aa = a[i] - '0';
		else aa = 0;
		if(i < blen) bb = b[i] - '0';
		else bb = 0;

		int tmp = c+aa+bb;
		s = tmp%10;
		c = tmp/10;

		ans.push_back(s+'0');
	}
	if(c > 0) ans.push_back(c);

	return ans;
}

string minusOne(string a){
	int alen = a.length();

	int aa;
	for(int i = 0 ; i < alen ; i++){
		aa = a[i]-'0';
		if(aa - 1 < 0){
			a[i] = '9';
		}
		else{
			a[i] = '0'+aa-1;
			break;
		}
	}
	if(a[alen-1] == '0') a.erase(a.begin()+alen-1);

	return a;
}

string pascal(string a, string b){
	if(a.compare(b) == 0 || b.compare("0") == 0) return "1";
	else return addStr(pascal(minusOne(a),b),pascal(minusOne(a),minusOne(b)));
}

string chg(int a){
	string ans;
	while(a > 0){
		ans.push_back(a%10);
		a/=10;
	}
	return ans;
}

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	string ans = pascal(chg(n),chg(m));

	printf("%s",ans.c_str());

}*/
