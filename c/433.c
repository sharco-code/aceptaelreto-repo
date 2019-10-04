#include <stdio.h>
int main() {
    int n,a;
    short c;
    do{
        scanf("%d",&n);
        a=0; c=1;
        while(n>a){
            a = a+c;
            c++;
        }
        if(n!=0){
            printf("%d",c-1);
            printf("\n");
        } 
    }while(n!=0);
    return 0;
}