#include <stdio.h>
#include <math.h>
#define s scanf
void p(){
    unsigned char x=0;
    float e;short c;signed char n,i; float u=0;
    s("%f",&e);
    if(e==0) return;
    s("%hhu",&n);
    for(i=0;i<n;i++){
        s("%hi",&c);
        u+=c;
    }
    
    printf("%.0f\n",ceil(u/e));
    p();
}
int main() {
    p();
    return 0;
}