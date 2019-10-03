#include <stdio.h>
#define p printf
#define s scanf
int main(){
    unsigned long n;
    unsigned long a,b, d,t,v;
    char x,y,u;
    s("%lu",&n);
    unsigned long i;
    for(i=0;i<n;i++){
        getchar();
        d=-1,t=-1,v=-1;
        s("%c%c%lu%c%c%c%lu",&x,&u,&a,&u,&y,&u,&b);
        if(x=='D') d=a;
        if(y=='D') d=b;
        if(x=='T') t=a;
        if(y=='T') t=b;
        if(x=='V') v=a;
        if(y=='V') v=b;
        if(v==-1) p("V=%lu\n",(d/t));
        if(t==-1) p("T=%lu\n",(d/v));
        if(d==-1) p("D=%lu\n",(v*t));
    }
    return 0;
}