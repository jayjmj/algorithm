/*
#include <cstdio>
#include <cstring>

char str[51];

int main(){

    scanf("%s",str);


    int cnt = 0;
    int dir = 0;
    int len = strlen(str);
    for(int i = 0 ; i < len ; i++){
        if(str[i]=='('){
           if(dir == 1) cnt+=5;
           else{
                cnt+=10;
                dir = 1;
           }
        }
        else{
            if(dir == -1) cnt+=5;
            else{
                cnt+=10;
                dir = -1;
            }
        }
    }

    printf("%d\n",cnt);

    return 0;
}
*/
