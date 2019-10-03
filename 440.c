#include <stdio.h>
#define s scanf
#define p printf
int main(){
    int g,min,max,a,n;
    unsigned long x;
    while(s("%d",&n)>0&&n!=0){
        g=a=max=1;
        min=2147483646;
        unsigned long v[n];
        int i;
        for(i=0;i<n;i++) s("%lu",&v[i]);
        x=v[0];
        for(i=1;i<n;i++){
            if (v[i]<x){
                x=v[i];
                g++;
                if (a>max) max=a;
                if (a<min) min=a;
                a=1;
            } else a++;
        }
        if(a>max) max=a;    
        if(a<min) min=a;
        p("%d %d %d\n",g,min,max);
    }
    return 0;
}