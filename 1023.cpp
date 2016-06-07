/*
#include <stdio.h>
#include <string.h>

long long d[52][56];
int save[52];
long long n,m;//길이,번째
long long bef,now;
int flag;
void back()
{
    int i,j;
}
int main()
{
    int i,j,k;
    scanf("%lld %lld",&n,&m);

    d[1][1]=1;//)
    d[1][55]=1;//(

    for(i=2;i<=50;i++)
    {
        d[i][0]=d[i-1][1];//(로 닫는경우
//      d[i][55]=d[i-1][0]+d[i-1][55]*2;//괄호 ㅇㅇ를 (로 닫는경우+d[i-1]의 ㄴㄴ에 더하는경우//인데 계산필요 X일듯
        for(j=1;j<50;j++)
        {
            d[i][j]=d[i-1][j+1]+d[i-1][j-1];
        }
    }
    long long tb=1;
    for(i=0;i<n;i++)
    {
        save[i]=(tb&m)/tb;
        tb*=2;
    }
    if(n%2==0)
    {
        flag=1;
        while(flag==1)
        {
            flag=0;
            //back();
            {
                int safe=0,alr=0;//(갯수,닫힌괄호갯수
                for(i=n-1;i>=0;i--)
                {
                    if(save[i]==0)
                    {
                        safe++;
                    }
                    else
                    {
                        safe--;alr++;
                        if(safe+alr<n/2)//여태까지 나온 (수가 n/2보다작으면
                        {
                            now+=d[i][safe+2];
                        }
                    }
                    if(safe==-1)
                    {
                        break;
                    }
                    if(alr+safe>n/2)
                    {
                        break;
                    }
                }
                if(i==-1&&safe==0)
                {
                    now++;
                }
            }
            now-=bef;
            if(now==0) flag=0;
            else flag=1;

            m+=now;bef+=now;now=0;
            tb=1;
            for(i=0;i<n;i++)
            {
                save[i]=(tb&m)/tb;
                tb*=2;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(save[i]==0)
            printf("(");
            else
            printf(")");
        }
    }
    else//상관없이 2bit
    {
        for(i=n-1;i>=0;i--)
        {
            if(save[i]==0)
            printf("(");
            else
            printf(")");
        }
    }
    return 0;
}
*/


/*
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

long long D[51][52];

string num2parenthesis(int len, long long n){
	string ans = "";
	while(n != 0){
		ans += n%2?')':'(';
		n = n/2;
	}
	int size = ans.size();
	for(int i = 1 ; i <= len-size ; i++) ans += '(';
	reverse(ans.begin(),ans.end());

	return ans;
}

string num2debug(int len, long long n){
	string ans = "";
	while(n != 0){
		ans += n%2?'1':'0';
		n = n/2;
	}
	int size = ans.size();
	for(int i = 1 ; i <= len-size ; i++) ans += '0';
	reverse(ans.begin(),ans.end());

	return ans;
}

int main(){

	freopen("input.txt","r",stdin);

	for(int t = 0 ; t < 1 ; t++){
	memset(D,0,sizeof(D));

	int N;
	long long K;
	scanf("%d %lld",&N,&K);

	D[1][1] = 1;
	for(int i = 2 ; i <= N ; i++){
		for(int j = 0 ; j <= N ; j++){
			if(j == 0) D[i][j] = D[i-1][j+1];
			else D[i][j] = D[i-1][j-1]+D[i-1][j+1];
		}
	}

	long long current = K;
	string ans;
	if(N%2 == 0){
		long long move = 0, premove = -1;
		while(move != premove){
			premove = move;
			move = 0;
			ans = num2parenthesis(N,current+premove);
			int stackCnt = 0;
			for(int i = 0 ; i < N ; i++){
				if(ans[i] == '(') stackCnt++;
				else{
					int remain = N-i-stackCnt;
					if(N-i-stackCnt >= 0) move += D[N-i-stackCnt][0];

					stackCnt--;
				}

				if(stackCnt < 0) break;
				else if(stackCnt == 0 && i == N-1) move++;
			}
		}
		current += move;
	}

	if(current >= (long long)1<<N){
		printf("-1\n");
		//return 0;
		continue;
	}
	ans = num2parenthesis(N,current);
	//ans = num2debug(N,current);
	printf("%s\n",ans.c_str());
	}

	return 0;
}
*/

