#include <stdio.h>
int main(){
    char x[]={'H','o','l','a',' ','m','u','n','d','o','.'};
    signed char a,i;
    scanf("%hhi",&a);
    for(i=0;i<a;i++) printf("%s\n",x);
    return 0;
}