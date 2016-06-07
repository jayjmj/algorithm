/*
#include <cstdio>

int r[42];

int main(){

	int count = 0;
	for(int i = 0 ; i < 10 ; i++){
		int num;
		scanf("%d",&num);

		if(r[num%42] == 0){
			r[num%42]++;
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}

*/


/*
#include <cstdio>

bool chk[42];

int main(){
	for(int i = 0 ; i < 10 ; i++){
		int n; scanf("%d",&n);
		chk[n%42] = true;
	}

	int ans = 0;
	for(int i = 0; i <= 41 ; i++){
		if(chk[i]) ans++;
	}

	printf("%d\n",ans);

	return 0;
}
*/
