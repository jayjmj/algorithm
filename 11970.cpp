/*
#include <cstdio>

int main(){

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int ans = (d-c)+(b-a);
    if(b<d){
        if(c<b){
            if(a<c) ans = d-a;
            else ans = d-c;
        }
        else ans = (d-c)+(b-a);
    }
    else{
        if(a<d){
            if(c<a) ans = b-c;
            else ans = b-a;
        }
        else ans = (b-a)+(d-c);
    }

    printf("%d\n",ans);

    return 0;
}
*/
